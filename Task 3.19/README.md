Kilden til denne koden er https://www.geeksforgeeks.org/zombie-and-orphan-processes-in-c/.
Koden forker og lager en barneprosess. Så blir forelderprosessen inaktiv når barneprosessen prøver å exite. Dette fører til at barneprosessen har ikke noen forelderprosess, og er da en zombie prosess. I terminalen kan vi se zombie prosessene ved bruk av “& ps -l”, som viser prosessene samtidig som den kjører zombie koden.
![Image319](https://raw.githubusercontent.com/MariusUIA/Gruppe23-Modul3/main/Task%203.19/image19.png)
