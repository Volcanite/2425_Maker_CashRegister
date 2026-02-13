# 2425_Maker_CashRegister

    En seconde année à l'ENSEA, un projet de conception d'une caisse enregistreuse ainsi que le module de paiement a été entreprit. Ce projet répond à une problématique de trésorerie présente dans l'école. En effet, durant chaque pause à la K-FET de l'école ou durant les événements, des produits sont mis en vente. Le personnel de l'école et les étudiants sont nombreux à payer en espèce et certains aimeraient payer en carte bancaise et cela engendre deux problèmes :
     - Les staffeurs doivent faire un bilan de la caisse réguliérement pour tenir les comptes ce qui est difficile dans certaines périodes.
     - Le paiement par carte bancaire implique soit un TPE qui impose des frais soit une application de paiement associatif sécurisée (Lyf, Lydia, HelloAsso, ...) qui ne sont pas le plus pratique au quotidien. 
     
     Des solutions ont été proposés mais cela demande la participation journalière d'étudiant. 
    
        Ainsi débute le projet de la caisse enregistreuse. Globalement on attend de celle-ci qu'elle puisse prendre des commandes et encaisser. Qu'elle puisse être reliée à plusieurs terminale de paiement permettant de traiter plusieurs clients à la fois en parallèle. Elle pourrait également aider les staffeurs sur le bilan de la caisse en liquidité et en paiement par carte ainsi qu'à faire un compte rendu des stocks. Evidemment tout cela serait sur base de donnée afin de pouvoir adapter l'interface à l'association et aux événements en cours. Enfin, une interface client serait mis à disposition afin de pouvoir créditer sa carte et suivre ses dernières transactions. Tout cela étant sauvegarder sur serveur avec backups en cas de problème.

## Décomposition du projet :
    Le projet se décompose en trois grandes parties : 
    - Mécanique : Modélisation et conception de la caisse à l'aide des outils présents à l'école. [lien vers Readme partie mécanique](./)
    - Electronique : Modélisation et conception d'une carte électronique pour le terminal de paiement permettant l'assemblage de différent module.
    - Software : Programmation embarquée de la caisse et du terminal de paiement. Réalisation d'une base de donnée hébergé sur serveur. Programmation d'une interface homme machine sur la caisse et d'un site utilisateur pour les clients et staffeurs.

 
