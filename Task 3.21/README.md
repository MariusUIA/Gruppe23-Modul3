Denne koden kommer fra https://github.com/SeanStaz/theCollatzConjecture.c/blob/master/hailstone.c.
Dette programmet spør brukeren om et tall som er mer enn 0, lager en child prosess, og så regner ut «The Collatz Conjecture». De første linjene inkluderer nødvendige biblioteker. Linjene 9-12 setter opp variablene og for child prosessen. Så spør programmet om et tall fra brukeren. På linje 20 starter programmet en child prosess med fork(). På linjene 22-40 regner programmet ut «collatz conjecture» helt til integeren blir 1. På linje 45 har parent prosessen brukt wait(), som gjør at den venter på child prosessen før programmet blir ferdig.
![Image321](https://raw.githubusercontent.com/MariusUIA/Gruppe23-Modul3/main/Task%203.21/image6.png)