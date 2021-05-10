<ins>__ASSIGNMENT 2__</ins>
For å besvare ASSIGNMENT 2 har vi tatt utgangspunkt i følgende kildekode: https://github.com/awadalaa/Socket-Programming-Java/tree/master/UDP-Pinger
Både Client og Server begynner først med å importere de relevante Java-bibliotekene, som da er java.net.* for nettverks relaterte funksjoner.
I serverkoden, setter den opp variablene på linje 10 og 11. Deretter kommer constructoren til serveren. Den krever input som er hvilken port serveren
skal settes opp på. Hvis den ikke får en port, ender den programmet. Denne koden har noen linjer som handler om å sette opp en falsk forsinkning av meldinger,
og en sjanse for at en melding ikke blir mottatt. Dette er på linje 24, og på linjene 41 til 48. På linje 28 starter serveren.
Det er en loop som holder serveren i gang og venter på innkommende data. Etter den har fått data, kan vi se på linje 50 til 57 hvordan serveren sender et svar.
På linje 64 er det et til objekt i koden. Dette er hva som gjør at linjene som blir printet kan vise dataen som leselig tekst. Den gjør også at linjene blir sortert.
I client koden, har den en constructor på linje 14. Den spør om input om hostnavn og port.
Den sender porten til serveren som også blir kjørt gjennom dette, på linjene 17 til 29. På 31 og 33 er det en loop. Denne loopen begynner på tallet 0,
og repeterer seg hvis tallet er mindre enn 10. På linje 67 ser vi at dette tallet går opp med 1 hver gang, så loopen går gjennom 10 ganger. Loopen sender en ping til serveren.
Denne pingen er en string som er «PING» og så tallet til loopen, og et lengre tall fra linje 36. På linje 50 definerer koden slutter å vente på svar etter ett sekund.
Hvis den får et svar fra serveren, skriver den delayen, og fortsetter loopen. Linjene 75 til 101 er lik som samme kode fra serverkoden. 
Den gjør dataen om til en leselig sortert string.
![Server](https://raw.githubusercontent.com/MariusUIA/Gruppe23-Oppgaver/main/Modul%204/Server.png)

<ins>__Kapittel 2, Oppgave P12__</ins>
midlertidig tekst
