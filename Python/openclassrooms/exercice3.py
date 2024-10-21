def main():
    nombre_a_gauche = input("Entrez un nombre entier : ")
    nombre_a_droite = input("Entrez un nombre entier : ")
    operation = input("Entrez l'opération souhaitée ['+', '-', '*' ou '/'] : ")

    # Vérifie si les deux nombres sont des nombres valides (entiers)
    if not nombre_a_gauche.isdigit() or not nombre_a_droite.isdigit():
        print("Erreur : les deux nombres doivent être des nombres entiers")
    else:
        nombre_a_gauche = int(nombre_a_gauche)
        nombre_a_droite = int(nombre_a_droite)

        resultat = None

        # Vérification de l'opération avec if/elif/else
        if operation == "+":
            resultat = nombre_a_gauche + nombre_a_droite
        elif operation == "-":
            resultat = nombre_a_gauche - nombre_a_droite
        elif operation == "*":
            resultat = nombre_a_gauche * nombre_a_droite
        elif operation == "/":
            # Vérifie si la division est valide (pas de division par zéro)
            if nombre_a_droite == 0:
                print("Erreur : impossible de diviser par zéro.")
            else:
                resultat = nombre_a_gauche / nombre_a_droite
        else:
            print("Erreur : l'opération doit être '+', '-', '*' ou '/'.")

        # Affiche le résultat s'il est valide
        if resultat is not None:
            print(f"Le résultat de l'opération est : {resultat}")

if __name__ == "__main__":
    main()

