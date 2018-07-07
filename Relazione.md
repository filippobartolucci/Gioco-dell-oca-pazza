# Gioco dell'oca pazza
Gioco dell'oca versione digitale per il progetto del corso di Programmazione UniBo 2017/2018

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
    
# Implementazione 
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
 
 
<b> Mazzo e carte: </b>

<b> Domande: </b>

