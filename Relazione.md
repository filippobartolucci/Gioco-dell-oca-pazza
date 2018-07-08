# Gioco dell'oca pazza
Gioco dell'oca versione digitale per il progetto del corso di Programmazione UniBo 2017/2018.
Per lo sviluppo del progetto ci siamo serviti della piattaforma <b>GitHub</b> 

# Interfaccia
Testuale, si gioca interamente da terminale 


# Caratteristiche
*  Da 2 a 4 giocatori

* 6 Carte 
    * Fortuna 
    * Domanda
    * Fermo 
    * Rilancia dado
    * Torna all'inizio
    * Scambia posizione

* 8 Caselle 
    * Inizio
    * Vuota
    * Avanti 
    * Indietro
    * Pesca
    * Fermo
    * Domanda
    * Arrivo

# Compilare il programma 
Per compilare il programma dai sorgenti o effettuare delle modifiche.

Necessario l'utilizzo di <b>CMake</b> [[Download qui!]](https://cmake.org/install/) 
- Eseguire da terminale il comando <b>cmake </b> nella cartella src del progetto
- Per creare l'eseguibile eseguire il comando <b>make</b>, rimanendo nella stessa directory
- Infine eseguire il gioco con il seguente comando:
##### Unix
```
./GOP
```
##### Windows
```
GOP
```
   
   
   
# Eseguire il programma
Per eseguire il programma  aprire il file <b>GOP</b> da terminale 

# Implementazione 

## ANSI
Essendo l'interfaccia del terminale priva di parte grafica, abbiamo pensato di utilizzare una sequenza di caratteri ASCII, detta ANSI, che permette di controllare l'output a video, come i colori del testo.

Le funzioni ANSI utilizzate per questo progetto controllano esclusivamente il colore del testo e sono formate da una sequenza di caratteri del tipo:
#### Escape Code
```
\ESC[Valuem
```
   - ESC: Escape indicato dal valore ```\x1b```;
   - Value: Valori numerici, compresi tra 31 e 36, utilizzati per colorare il testo;
   - m: Carattere terminale che indica la fine della sequenza ANSI 
  
## Programmazione ad oggetti
Per rendere lo sviluppo più pratico e intuitivo abbiamo scelto la programmazione ad oggetti che ci ha permesso di dividere i componenti necessari per lo sviluppo in classi, a loro volta divise in due file ```.hpp``` e ```.cpp```.

Questo ci ha permesso di avere una suddivisione chiara e di facile comprensione sia per noi, che ci abbiamo lavorato, che per chi voglia leggere i file e comprendere le varie parti dello sviluppo.

## Tema Cinema e Serie TV
Abbiamo voluto inserire all'interno del gioco anche delle domande che trattassero un argomento preciso e abbiamo scelto il tema Cinema e Serie TV, spaziando tra diversi generi, come Fantasy, Thriller, Horror, Commedia, Drama.

Le domande vengono scelte in maniera casuale e vengono proposte al giocatore quattro possibili risposte, alle quali si può rispondere inserendo una lettera minuscola compresa tra la ```a``` e la ```d```.

## Classi

<b> Giocatore: </b>
* Nella classe giocatore sono presenti i parametri ```nome``` (array di char), ```posizione``` (int) e ```colore``` (string)
* Ogni giocatore inizia dalla posizione 0 e durante l'esecuzione si traccia il suo avanzamento
* All'inizio del gioco viene assegnato un preciso colore ad ogni giocatore


<b>Tabellone e Caselle:</b>
* La classe del tabellone è composta da un array di caselle di dimensione variabile, da un minimo di 40 caselle a un massimo di 80. Si è scelto di salvare le caselle in un array per poter accedere direttamente alle caselle in modo non sequenziale
* Il costruttore del tabellone setta la prima e l'ultima casella come Inizio e Arrivo mentre il resto delle caselle è generato casualmente dal costruttore delle caselle secondo le seguenti probabilità:
     
      - Casella Vuota    3/8
      - Casella Avanti   1/8
      - Casella Indietro 1/8
      - Casella Fermo    1/8
      - Casella Domanda  1/8
      - Casella Pesca    1/8

* Ogni casella ha un campo privato in cui è salvato il tipo, realizzato come <b>enumeration</b> (Vuota, Avanti, Indietro,...)
* Gli effetti delle caselle vengono applicati dalla funzione <b>effetto()</b> del tabellone che tramite uno switch gestiste i vari tipi di effetti associati a ogni casella 
* La funzione <b>stampaTabellone()</b> stampa a terminale tutto il tabellone di gioco su due colonne e mostra un <b>"x"</b> colorato nelle posizioni corrispondenti dei giocatori 
 

<b> Carta: </b>
* La classe carta viene estesa dagli oggetti più specifici.
* Contiene un parametro "messaggio" 
* Tutti gli effetti delle relative carte vengono applicati tramite un metodo effetto_carta.

La classe Carta è estesa dalle seguenti classi :

<b> Fortuna </b> : 
         Avviene il lancio di una moneta e se il risultato è testa il giocatore si muove di due caselle in avanti,
         altrimenti si sposta di due caselle indietro.
   
<b> Domanda </b> : 
         Al giocatore viene chiesto di rispondere ad una domanda a tema cinema e serie tv.
         Se la risposta è gista avanza di cinque caselle,altrimenti salta il turno.
    
<b> Fermo un turno </b> : 
         Il giocatore che pesca questa carta rimane fermo per la durata di un turno.
    
<b> Rilancia dado </b> : 
         Il giocatore che pesca questa carta può lanciare nuovamente il dado.
         In base al risultato il giocatore potrà avanzare di tale numero di caselle.  
    
<b> Torna all'inizio </b> : 
         Il giocatore che pesca questa carta torna alla partenza.
    
<b> Scambia posizione </b> :
         Il giocatore che pesca questa carta scamibia la propria posizione con quella del giocatore più vicino al traguardo.

<b> Mazzo: </b>
* Formato da 40 carte totali con al suo interno un metodo pesca per permettere al giocatore di effettuare la pescata.
* Le carte verranno sempre pescate in modo randomico ed ognuna con un effetto particolare tra quelli sopra definiti.
* La pescata verrà attivata solamente quando un giocatore finirà su una casella dove gli sarà permesso pescare una carta
  dal mazzo ed applicarne il suo effetto.
  
  
<b> Domande: </b>
* La classe Domande è formata da una Lista di una ```struct``` contenente 20 domande diverse.
* Per la scelta casuale delle domande abbiamo utilizzato la funzione ```srand()``` che in maniera casuale ci estrae una domanda 
* La funzione ```ask()``` verifica che la risposta sia corretta e in caso affermativo, il giocatore avanzerà nel tabellone di 5 caselle, altrimenti tornerà indietro di 5 caselle.

##CMake
Per facilitare il processo di compilazione ci siamo affidati all'utility <b>CMake</b> che permette di ottenere facilmente un <b>Makefile</b> già scritto con il quale compilare il programma da terminale

# Sviluppato da 
 * Francesco Cerio
 * Francesco Polisena
 * Filippo Bartolucci

