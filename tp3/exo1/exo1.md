# EXERCICE 1

### Cas A

`1. Pourquoi n'y a-t-il pas de relation entre last_wheel et wheels[3] contrairement à first_wheel et wheels[0] ?`

La différence entre first_wheel et last_wheel dans ce code est due à l'utilisation de auto& pour first_wheel et auto pour last_wheel.

first_wheel est une référence à la première roue de la voiture. Cela signifie que first_wheel et car.wheels[0] pointent vers le même objet en mémoire. Si vous modifiez first_wheel, vous modifiez également car.wheels[0].

En revanche, last_wheel est une copie de la dernière roue de la voiture. Cela signifie que last_wheel et car.wheels[3] sont deux objets distincts en mémoire. Si vous modifiez last_wheel, cela n'affectera pas car.wheels[3].

### Cas B

`1. Dans le graphe d'ownership, comment distingue-t-on un pointeur d'une référence ?`
Les références sont des cases en pointillées avec des flèches en pointillées tandis que les pointeurs sont des cases en trait plein avec des flèches en pointillées.

Une référence est un alias tandis qu'un pointeur possède une vraie valeur en mémoire.

`2. Comment est représenté un pointeur nul ?` 
```
int* ptr = nullptr;
```
Une case trait plein avec une flèche qui pointe vers une croix dans un cercle.

`3. En termes de code, quelles sont les deux différences principales entre un pointeur-observant et une référence ?`
Réaffectation : Un pointeur observant peut être réaffecté à un autre objet après sa création. En revanche, une référence, une fois initialisée à un objet, ne peut pas être réaffectée à un autre objet.

Nullabilité : Un pointeur observant peut être null, c'est-à-dire qu'il peut ne pointer vers aucun objet. En revanche, une référence doit toujours faire référence à un objet valide et ne peut pas être null

### Cas C

`1. Essayez de représenter les transitions dans le graphe d'ownership après le dernier push_back si celui-ci déclenchait une réallocation mémoire.`
