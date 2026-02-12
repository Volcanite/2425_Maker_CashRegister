from django.contrib import admin
from django.contrib.auth.admin import UserAdmin as DefaultUserAdmin
from .models import  users_custom, Article, Menu, MenuDetails, Transaction, TransactionDetails
# Register your models here. Every model registered here will be visible in the Django admin interface.
# It allows you to manage your application's data through a user-friendly interface without needing to write custom views or forms for basic CRUD operations. 
# By registering your models, you can easily add, edit, and delete records in the database directly from the admin panel.
@admin.register(users_custom)
class UserCustomAdmin(admin.ModelAdmin):
    list_display = ('user', 'role', 'status', 'sold', 'created_at')

class MenuDetailsInline(admin.TabularInline):
    model = MenuDetails
    extra = 2  # Nombre de lignes vides par défaut pour ajouter des articles

@admin.register(Menu)
class MenuAdmin(admin.ModelAdmin):
    inlines = [MenuDetailsInline]  # Ajoute les articles associés directement dans le menu
    list_display = ('name', 'price')

@admin.register(Article)
class ArticleAdmin(admin.ModelAdmin):
    list_display = ('name', 'quantity', 'type', 'price')
    list_filter = ('type',)

admin.site.register(MenuDetails)
admin.site.register(Transaction)
admin.site.register(TransactionDetails)