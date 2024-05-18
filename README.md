# puissance5 (réalisé par Adrien Gaucher, Terence Fernandes et Augustin Fregnaux)

le code compile parfaitement. nous avons testé différentes parties avec différentes tailles de grilles avec deux joueurs humains ou un joueur humain et un joueur machine (mode aléatoire) et le jeu compile jusqu'à obtention d'une victoire par l'un des camps.

l'IA qui calcule le jeu est aléatoire et on peut jouer à 2 joueurs. 

on peut faire en sorte de demander au user le nombre de colonnes et de lignes de la grille 

pas d'utilisation d'héritages mais une utilisation de pointeurs appropriées notamment pour garder dans la mémoire dynamique les pions consécutifs, et par l'utiilisation d'un boléen fais ren sorte que la victoire soit bien attribuée sans faire de boucle et ainsi optimiser le temps de réponse du code.

diffcultées avec l'algorithme du minimax car meme si le programme compile avec la modification dans le fichier plateau l'algortihme met trop de temps a calculer la meilleure position (nous précisons que nosu n'étions pas là au premier semestre et que par conséquent n'avons pas eu de cours sur l'algortihme du minimax) 

organisation pour coder le projet sur github et en présentiel : un premier diagramme de classe a été réalisé pour avoir le skelette du code puis nous avons codé les différentes classes et méthodes essentielles pour run le programme. nous avons ensuite modifié petit a petit le diagramme de classe pour qu'il soit à jour.

concernant le diragramme de classe nous avons fait le choix d'intégrer les fonctions "estunIA" et "aléatoire" dans la classe Joueur car nous considérons la machine comme un joueur a part entière. les"+" et "-" correspondent aux variables respectivement publique et privé.

