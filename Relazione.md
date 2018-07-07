# Gioco dell'oca pazza
Gioco dell'oca versione digitale per il progetto del corso di Programmazione UniBo 2017/2018.
Per lo sviluppo del progetto ci siamo serviti della piattaforma <b>GitHub</b> 

# Interfaccia
Interfaccia testuale, si gioca interamente da terminale 


# Caratteristiche
*  Da 2 a 4 giocatori

* Carte 
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

# Eseguire il programma
Per eseguire il programma  aprire il file <b>GOP</b> da terminale 

# Compilare il programma 
Per compilare il programma dai sorgenti o effettuare delle modifiche.

Necessario l'utilizzo di <b>CMake<b/> [Download](https://cmake.org/install/) 
- Eseguire da terminale il comando <b>cmake .</b> nella cartella src del progetto
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
 
# Implementazione 
Il gioco è eseguibili interamente da terminale. Vengono utilizzati i codici delle tabelle colori ANSI per colore l'output su terminale.


<b> Giocatori: </b>



<b>Tabellone e Caselle:</b>
* La classe del tabellone è composta da un array di caselle di dimensione variabile, da un minimo di 40 caselle a un massimo di 80. Si è scelto di salvare le caselle in un array per poter accedere in modo diretto a caselle in modo non sequenziale
* Il costruttore del tabellone setta la prima e l'ultima casella come Inizio e Arrivo mentre il resto delle caselle è generato casualmente dal costruttore delle caselle secondo le seguenti probabilità:
     
      - Casella Vuota    3/8
      - Casella Avanti   1/8
      - Casella Indietro 1/8
      - Casella Fermo    1/8
      - Casella Domanda  1/8
      - Casella Pesca    1/8

* Ogni casella ha un campo privato in cui è salvato il tipo, realizzato come enumeration (Vuota, Avanti, Indietro,...)
* Gli effetti delle caselle vengono applicati dalla funzione effetto() del tabellone che tramite uno switch gestiste i vari tipi di effetti associati a ogni casella 
* La funzione stampaTabellone() stampa a terminale tutto il tabellone di gioco su due colonne e mostra un <b>"x"</b> colorato nelle posizioni corrispondenti dei giocatori 
 

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
# Sviluppato da 
 * Francesco Cerio
 * Francesco Polisena
 * Filippo Bartolucci

