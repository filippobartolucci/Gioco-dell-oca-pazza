cmake_minimum_required(VERSION 3.6)
project(GOP)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 11)            # Enable c++11 standard

set(SOURCE_FILES ../src/main.cpp ../src/Carta/Carta.cpp ../src/Carta/Carta.hpp ../src/Casella/casella.cpp ../src/Casella/casella.hpp ../src/Colors/Colors.cpp ../src/Colors/Colors.hpp ../src/Dado/Dado.cpp ../src/Dado/Dado.hpp ../src/Domande/Domande.cpp ../src/Domande/Domande.hpp ../src/Effetti\ Carte/DomandaCarta.cpp ../src/Effetti\ Carte/DomandaCarta.hpp ../src/Effetti\ Carte/Fermounturno.cpp ../src/Effetti\ Carte/Fermounturno.hpp ../src/Effetti\ Carte/Fortuna.cpp ../src/Effetti\ Carte/Fortuna.cpp ../src/Effetti\ Carte/RilanciaDado.cpp ../src/Effetti\ Carte/Rilanciadado.hpp ../src/Effetti\ Carte/Scambia.cpp ../src/Effetti\ Carte/Scambia.hpp ../src/Effetti\ Carte/TornaInizio.cpp ../src/Effetti\ Carte/TornaInizio.hpp ../src/Game/game.cpp ../src/Game/Game.hpp ../src/giocatore/giocatore.cpp ../src/giocatore/giocatore.hpp ../src/Mazzo/Mazzo.cpp ../src/Mazzo/Mazzo.hpp ../src/Tabellone/tabellone.cpp ../src/Tabellone/tabellone.hpp)
add_executable(GOP ${SOURCE_FILES}) 

