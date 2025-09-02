Question 01 : Que signifie GCC ?

GCC c'est a dire :GNU Compiler Collection
    -compiler :prendre le code en c et le transformer en langage machine comprendre par l'ordinateur
    -collection : pour plusieurs langage comme c++ , Fortran....

Question 02: signification de GNU ?
GNU = GNU'S Not Unix 
    -Unix : systeme d'exploitation , creér pour que plusieurs personnes puissent utiliser le meme ordinateur en meme temps ,il était simple ,puissant et portable 
    -GNU : system gratuit et libre qui ressemble a UNIX avec upgrades:
               *liberté de utiliser le programme ,étudier,modification et partaget des versions .

Question 03:C'est quoi le problème avec GCC?

Peut être lent sur de très gros projets.
Les messages d’erreurs ne sont pas toujours clairs.
Très strict : il signale même les petites erreurs ou mauvaises pratiques.
 
 Question 04: comment GCC trouve-t-il les erreurs?
  * il analyse le code avant compilation.
  * il détecte les erreurs de syntax (mots mal écrits,parentheses oubliéees,etc).
  
  Question 05 : Pourquoi C est-il si court (laconique) ?
  parce qu'il a ete concu pour etre :
   * Rapide et efficace
   * facile a compiler sur les machines limitées a l'epoque 
   * proche du langage machine 
Question 06: exit(0) et  return 0
   * return 0 : indique simplement au systeme que le programme s'est terminé correctement .
   * exit(0) :fait la meme chose , mais en plus il nettoie , ferme les fichiers ouverts , vide les memoires tampons....

Question 07: Que se passe-t-il si main se termine sans return ?
en C moderne , comme si tu avais ecrit , return 0

Question 08: Le compilateur supprime-t-il un commentaire entièrement ou le remplace-t-il par un espace blanc ?
le compilateur supprime les commentaires
Question 09 : Comment savoir si un commentaire n’est pas fermé ?

le compilateur affiche une erreur du type : "unterminated comment" (commentaire non terminé).

Question 10 :
Non
Question 11:D'où vient le nom du type float ?
float : floating point 

Question 12: Pourquoi les constantes à virgule flottante doivent-elles se terminer par la lettre f ?
en c quand tu ecris 3.14 est type double gros nombre mais sion veut un float (plus petit et moins précis), on écrit 3.14f, sinon le compilateur convertira double vers float, et cela peut donner un avertissement.
