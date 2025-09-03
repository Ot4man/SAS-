Question 1: J'ai vu la conversion %i utilisée pour lire et écrire des entiers. Quelle est la différence entre %i et %d ?
    --->La différence est la suivante :

* %d lit ou écrit un entier décimal uniquement.

* %i lit ou écrit un entier en décimal, octal (si commence par 0) ou hexadécimal (si commence par 0x).

Question 2: Si printf traite % comme le début d'une spécification de conversion, comment puis-je imprimer le caractère % ?
    --->pour imprimer le caractere % on peut ecrire %% pour afficher %.

Question 3: La séquence d'échappement \t est censée faire avancer printf jusqu'au prochain taquet de tabulation. Comment puis-je savoir à quelle distance se trouvent les taquets de tabulation ?
    --->La séquence \t avance le curseur jusqu’au prochain taquet de tabulation, qui est souvent tous les 8 caractères

Question4: Que fait scanf s'il lui est demandé de lire un nombre mais que l'utilisateur entre une entrée non numérique ?
    ---> scanf ne lit rien.
     Le caractère non numérique reste dans le tampon d’entrée.

Question5: Je ne comprends pas comment scanf peut "remettre" des caractères et les relire plus tard.
    --->scanf peut remettre des caractères non utilisés dans le tampon d’entrée pour les relire plus tard.

Question6: Que fait scanf si l'utilisateur met des signes de ponctuation (des virgules, par exemple) entre les nombres ?
    --->scanf lit seulement jusqu’au premier caractère non compatible.
    Les caractères non numériques (ex. ,) restent dans le tampon d’entrée.
    La lecture suivante peut échouer si le caractère reste incompatible.

Question7: Je veux appliquer l'opérateur % à un opérande à virgule flottante, mais mon programme ne compile pas. Que puis-je faire ?
    --->L’opérateur % ne fonctionne qu’avec les entiers.
        Pour appliquer le modulo à des nombres flottants (float ou double) 
        on utilise fmod(x, y) de biblio  math.h

Question8: Pourquoi les règles d'utilisation des opérateurs / et % avec des opérandes négatifs sont-elles si compliquées ?  
    --->Les règles pour / et % avec des nombres négatifs suivent le standard C

Question9: Si C a des lvalues, a-t-il aussi des rvalues ?
    ---> Oui ,C aussi a des rvalues,
    lvalue : expression qui peut apparaître à gauche d’une assignation.
    rvalue : valeur temporaire, non modifiable directement

Question10: Vous avez dit que v += e n'est pas équivalent à v = v + e si v a un effet de bord. Pouvez-vous expliquer ?
    --->v += e peut être différent de v = v + e si v a un effet de bord ,
        Le comportement exact dépend de l’ordre d’évaluation.


Question11 :Pourquoi C fournit-il les opérateurs ++ et -- ? Sont-ils plus rapides que d'autres moyens d'incrémenter 
et de décrémenter, ou sont-ils simplement plus pratiques ?
    --->Les opérateurs ++ et -- sont fournis pour praticité et concision.
        Parfois optimisés, mais surtout pour la lisibilité.

Question12:Les opérateurs ++ et -- fonctionnent-ils avec des variables de type float ?
    --->Non, ++ et -- ne fonctionnent pas avec le type float .

Question13: Lorsque j'utilise la version post-fixe de ++ ou --, quand exactement l'incrémentation ou la décrémentation est-elle effectuée ?
    --->Avec l’opérateur post-fixe i++ ou i-- :
    La valeur originale est utilisée dans l’expression.
    L’incrémentation/décrémentation est effectuée après l’évaluation de l’expression

Question14: Mon compilateur n'affiche pas d'avertissement lorsque j'utilise = au lieu de ==. Y a-t-il un moyen de forcer le compilateur à remarquer le problème ?
    --->Pour forcer le compilateur à remarquer ce problème :
        Activez les avertissements : gcc -Wall -Wextra -Werror..

Question15: Si i est une variable de type int et f est une variable de type float, quel est le type de l'expression conditionnelle (i > 0 ? i : f) ?
    --->float.

Question16: Le modèle donné pour l'instruction switch le décrivait comme la "forme la plus courante". Existe-t-il d'autres formes ?
    --->Oui, switch peut aussi être utilisé avec des enum ou char, pas seulement avec int.

Question17: J'ai vu plusieurs méthodes pour indenter l'instruction switch. Laquelle est la meilleure ?
    --->L’important est la cohérence : chaque case est indenté d’un niveau à l’intérieur du switch.

Question18: Quelle forme de boucle infinie est préférable, while (1) ou for (;;) ?
    --->Les deux sont corrects : while(1) ou for(;;) pour une boucle infinie.

Question19: J'ai entendu dire que les programmeurs ne devraient jamais utiliser l'instruction continue. Est-ce vrai ?
    --->L’instruction continue est sûre si utilisée modérément pour améliorer la lisibilité.

Question 20: Qu'est-ce qui est si mauvais avec l'instruction goto ?
    --->goto est déconseillé car il rend le code difficile à comprendre et à maintenir.

Question 21: L'instruction nulle a-t-elle d'autres usages que d'indiquer que le corps d'une boucle est vide ?
    --->L’instruction nulle (;) peut aussi servir dans des macros ou pour marquer un point vide dans le code

Question 22: Y a-t-il d'autres moyens de faire ressortir le corps de boucle vide que de placer l'instruction nulle sur une ligne à part ?
    --->Oui, on peut utiliser {} pour indiquer un corps de boucle vide.

Question 23: %o et %x sont utilisés pour écrire des entiers non signés en notation octale et hexadécimale. Comment puis-je écrire des entiers ordinaires (signés) en octal ou en hexadécimal ?
    --->%o et %x affichent des entiers non signés en octal ou hexadécimal.

Question 24: Mais que se passe-t-il si le nombre est négatif ? Comment puis-je l'écrire en octal ou en hexadécimal ?
    --->Les nombres négatifs s’affichent en octal ou hex via leur représentation binaire en complément à deux.

Question 25: Pourquoi les constantes à virgule flottante sont-elles stockées sous la forme double plutôt que float ?
    --->Les constantes flottantes sont par défaut en double pour plus de précision.

Question 26: À quoi ressemblent les constantes hexadécimales à virgule flottante et à quoi servent-elles ?
    --->Sert à représenter précisément les flottants, utile pour le matériel ou la précision binaire.

Question 27: Pourquoi utilisons-nous %lf pour lire une valeur double mais %f pour l'imprimer ?
    --->%lf pour lire un double.
        %f pour l’affichage, car printf convertit automatiquement double.

Question 28: Quelle est la bonne façon de prononcer char ?
    --->La bonne prononciation de char est souvent "char" comme le mot anglais character.

Q29: Quand est-ce que cela a de l'importance si une variable de type char est signée ou non signée ?
    --->Il est important de savoir si char est signé ou non si on manipule des valeurs ≥128 ou <0.
        signed char : -128 à 127 ,unsigned char : 0 à 255

Q30: Je ne comprends pas comment le caractère de nouvelle ligne peut être le caractère ASCII de saut de ligne. Quand un utilisateur saisit une entrée et appuie sur la touche Entrée, le programme ne lit-il pas cela comme un caractère de retour chariot ou un retour chariot plus un saut de ligne ?
    --->\n représente le saut de ligne 
    Lors de l’entrée utilisateur :
    Unix/Linux → \n
    Windows → \r\n


Q31: Si getchar est plus rapide, pourquoi voudrions-nous utiliser scanf pour lire des caractères individuels ?
    --->getchar() est plus rapide pour lire un caractère.
        scanf("%c") est plus flexible si vous voulez gérer plusieurs formats ou espace blanc.
    
Q32: Dans quelles circonstances les promotions intégrales convertissent-elles un caractère ou un entier court en unsigned int ?
    ---> Les promotions intégrales convertissent char ou short en int ou unsigned int pour les calculs.

Q33: Que se passe-t-il exactement si j'affecte une valeur à une variable qui n'est pas assez grande pour la contenir ?
    --->Affecter une valeur trop grande tronque les bits.
        unsigned int : modulo 2^n
        signed int : comportement parfois indéfini.

Q34: Pourquoi C se donne-t-il la peine de fournir des définitions de type ? Est-ce que définir une macro BOOL n'est pas aussi bien que de définir un type Bool en utilisant typedef ?
    --->typedef crée un vrai type, avec scope et compatibilité.
        Une macro #define BOOL int est juste un remplacement textuel.

Q35: Vous avez dit que les compilateurs "peuvent généralement déterminer la valeur d'une expression sizeof." Un compilateur ne peut-il pas toujours déterminer la valeur d'une expression sizeof ?
    --->Le compilateur peut souvent déterminer sizeof au moment de la compilation.
        Mais pas toujours, par exemple pour un tableau de taille inconnue ou un type incomplet.