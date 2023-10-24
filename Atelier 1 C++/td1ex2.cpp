Soient les déclarations :
char c = '\x05' ;
int n = 5 ;
long p = 1000 ;
float x = 1.25 ;
double z = 5.5 ;
Quels sont le type et la valeur de chacune des expressions suivantes :
n + c + p /* 1 */
2 * x + c /* 2 */
(char) n + c /* 3 */
(float) z + n / 2 
--------------------------------
Pour évaluer chaque expression, nous allons prendre en compte les types de données des variables impliquées et les règles de conversion implicite ou explicite des types.

1. `n + c + p`:
   - `n` est de type `int`.
   - `c` est de type `char`.
   - `p` est de type `long`.

   Le type résultant sera le type le plus large des opérandes, qui est `long` dans ce cas. Donc, le type de l'expression est `long`.

   L'expression `n + c + p` sera évaluée comme suit :
   - Conversion implicite de `c` en `int` : `'\x05'` devient `5`.
   - Maintenant, nous avons `int + int + long`.
   - Conversion implicite de `int` en `long` : `int` devient `long`.
   - Maintenant, nous avons `long + long`, ce qui donne `2005` (résultat de l'addition).

2. `2 * x + c`:
   - `x` est de type `float`.
   - `c` est de type `char`.

   Le type résultant sera le type le plus large des opérandes, qui est `float` dans ce cas. Donc, le type de l'expression est `float`.

   L'expression `2 * x + c` sera évaluée comme suit :
   - Conversion implicite de `c` en `float` : `'\x05'` devient `5.0`.
   - Maintenant, nous avons `float + float`.
   - Effectuer l'opération de multiplication et d'addition donne `12.5` (résultat de l'expression).

3. `(char) n + c`:
   - `n` est de type `int`.
   - `c` est de type `char`.

   Dans cette expression, `(char)` indique une conversion explicite de `n` en `char`.

   L'expression `(char) n + c` sera évaluée comme suit :
   - Conversion explicite de `n` en `char`, ce qui signifie que la valeur `5` de `n` est convertie en `char`, donc `5` reste `5` en tant que `char`.
   - Maintenant, nous avons `char + char`, ce qui donne `10` (résultat de l'addition).

4. `(float) z + n / 2`:
   - `z` est de type `double`.
   - `n` est de type `int`.

   Dans cette expression, `(float)` indique une conversion explicite de `z` en `float`.

   L'expression `(float) z + n / 2` sera évaluée comme suit :
   - Conversion explicite de `z` en `float`, ce qui signifie que la valeur `5.5` de `z` est convertie en `float`, donc `5.5` reste `5.5` en tant que `float`.
   - Division de `n` par `2` donne `2.5` (résultat de la division).
   - Maintenant, nous avons `float + float`, ce qui donne `8.0` (résultat de l'addition).

Résumé des résultats :
1. `n + c + p` a un type `long` et une valeur de `2005`.
2. `2 * x + c` a un type `float` et une valeur de `12.5`.
3. `(char) n + c` a un type `char` et une valeur de `10`.
4. `(float) z + n / 2` a un type `float` et une valeur de `8.0`.

=============================
Soient les déclarations suivantes :
int n = 5, p = 9 ;
int q ;
float x ;
Quelle est la valeur affectée aux différentes variables concernées par chacune des instructions
suivantes ?
q = n < p ; /* 1 */
q = n == p ; /* 2 */
q = p % n + p > n ; /* 3 */
x = p / n ; /* 4 */
x = (float) p / n ; /* 5 */
x = (p + 0.5) / n ; /* 6 */
x = (int) (p + 0.5) / n ; /* 7 */
q = n * (p > n ? n : p) ; /* 8 */
q = n * (p < n ? n : p) ; 
------------------------------------
Pour évaluer chacune des instructions, nous allons examiner les opérations effectuées et déterminer les valeurs affectées aux variables.

```c
int n = 5, p = 9;
int q;
float x;
```

1. `q = n < p;` : Cela évalue l'expression `n < p`, qui est une comparaison booléenne. Si la condition est vraie, `q` recevra 1 (pour vrai), sinon il recevra 0 (pour faux). Dans ce cas, `n` est inférieur à `p`, donc `q` prend la valeur 1.

2. `q = n == p;` : Cela évalue l'expression `n == p`, qui est une comparaison booléenne. Si la condition est vraie, `q` recevra 1 (pour vrai), sinon il recevra 0 (pour faux). Dans ce cas, `n` n'est pas égal à `p`, donc `q` prend la valeur 0.

3. `q = p % n + p > n;` : Cela évalue l'expression `p % n + p > n`. Voici comment cela se décompose :
   - `p % n` donne le reste de la division entière de `p` par `n`, ce qui est `9 % 5 = 4`.
   - Donc, l'expression devient `4 + p > n`, ce qui équivaut à `4 + 9 > 5`, ce qui est vrai.
   - Par conséquent, `q` prend la valeur 1 (pour vrai).

4. `x = p / n;` : Cela effectue une division entière de `p` par `n`. Le résultat de la division entière de 9 par 5 est 1. Donc, `x` prend la valeur 1.0 car la division implique la promotion implicite de `int` à `float`.

5. `x = (float) p / n;` : Cela effectue une division avec conversion explicite de `p` en `float`. Le résultat de la division de 9 par 5 est 1.8. Donc, `x` prend la valeur 1.8.

6. `x = (p + 0.5) / n;` : Cela effectue la division de `p + 0.5` par `n`. Le résultat de la division de 9.5 par 5 est 1.9. Donc, `x` prend la valeur 1.9.

7. `x = (int) (p + 0.5) / n;` : Cela effectue la division de `(int) (p + 0.5)` par `n`. Le résultat de la conversion de 9.5 en `int` est 9, puis la division de 9 par 5 donne 1. Donc, `x` prend la valeur 1.0.

8. `q = n * (p > n ? n : p);` : Cela utilise l'opérateur conditionnel (ternaire) pour sélectionner la valeur maximum entre `n` et `p` et multiplie le résultat par `n`. Dans ce cas, `p` est plus grand que `n`, donc `q` prend la valeur `9 * 9 = 81`.

9. `q = n * (p < n ? n : p);` : Cela utilise l'opérateur conditionnel (ternaire) pour sélectionner la valeur minimum entre `n` et `p` et multiplie le résultat par `n`. Dans ce cas, `n` est plus grand que `p`, donc `q` prend la valeur `5 * 5 = 25`.

