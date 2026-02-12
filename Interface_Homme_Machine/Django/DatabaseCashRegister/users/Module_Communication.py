import socket
from urllib import response

def send_bluetooth_command(address, command):
    """
    Envoie une commande au périphérique Bluetooth via BLE.
    :param address: Adresse MAC du périphérique Bluetooth (HC-05 ou autre).
    :param command: Commande à envoyer (chaîne de caractères).
    :return: Réponse du périphérique (si disponible).
    """
    try:
        # Créer une socket Bluetooth RFCOMM
        sock = socket.socket(socket.AF_BLUETOOTH, socket.SOCK_STREAM, socket.BTPROTO_RFCOMM)
        
        # Se connecter au périphérique
        sock.connect((address, 1))  # Le port 1 est utilisé pour le module HC-05
        print(f"Connecté à {address}")
        
        # Envoyer la commande
        sock.send(command.encode())
        print(f"Commande envoyée : {command}")
        
        # Lire une réponse (attend la bonne récéption du message)
        response = ""
        n=0
        while n<15:
            n+=1
            data = sock.recv(1024).decode('utf-8')
            response += data
            if '\n' in data:  # Arrêter la lecture si le caractère de fin est détecté
                if 'data received' in response:
                    break   
            else :
                print(f"Réponse partielle reçue : {response}") # à envoyez en notification sur la caisse et/ou sur le terminal
                break
            
        
        # Fermer la connexion
        sock.close()
        
        return response
    except Exception as e:
        return f"Erreur : {e}"

if __name__ == "__main__":
    address = "98:D3:41:F6:FF:4F"  # Adresse MAC du HC-05
    command = "Votrecommande" 
    response = send_bluetooth_command(address, command)
    print(response)
    
