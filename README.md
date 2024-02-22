# chessAlisa

## Документация:
Этот проект представляет собой комплексную реализацию игры в шахматы, включая логику ИИ, генерацию ходов, оценку позиций и пользовательский интерфейс.
Он использует C++ для основной логики и SFML для графического и аудио представления. Проект организован и собирается с помощью Visual Studio.

## Компоненты проекта:
### AI.cpp / AI.h
Назначение: Реализует логику искусственного интеллекта для шахмат, включая алгоритмы выбора хода, оценки позиции и просчета вариантов на несколько ходов вперед.
### Bitboard.h
Назначение: Определяет структуры и функции для работы с битовыми досками, что позволяет эффективно представлять и манипулировать состояниями шахматной доски и фигур.
### LegalMoveGen.cpp / LegalMoveGen.h
Назначение: Отвечает за генерацию всех легальных ходов в текущей шахматной позиции, учитывая такие правила, как шах, мат и пат.
### Main.cpp
Назначение: Точка входа в программу. Инициализирует основные компоненты игры, такие как пользовательский интерфейс и игровой цикл.
### Move.cpp / Move.h
Назначение: Предоставляет классы для представления шахматных ходов, включая начальную и конечную позицию, а также любые специальные ходы, такие как рокировка или взятие на проходе.
### MoveList.cpp / MoveList.h
Назначение: Управляет списком возможных ходов, предоставляя функционал для добавления, удаления и сортировки ходов в контексте анализа игровой ситуации.
### MoveSorter.cpp / MoveSorter.h
Назначение: Реализует алгоритмы сортировки ходов, например, для улучшения эффективности алгоритмов поиска, путем приоритизации наиболее перспективных ходов.
### Position.cpp / Position.h
Назначение: Управляет текущей позицией на шахматной доске, включая расстановку фигур, права на рокировку, возможность взятия на проходе и т.д.
### StaticEvaluator.cpp / StaticEvaluator.h
Назначение: Оценивает шахматные позиции без выполнения ходов, используя различные эвристики, такие как материальный баланс, структура пешек, активность фигур и безопасность короля.
### UI.cpp / UI.h
Назначение: Реализует интерфейс пользователя для взаимодействия с игрой, включая отображение доски, прием пользовательских команд и вывод сообщений.
### ZobristHash.cpp / ZobristHash.h
Назначение: Предоставляет функционал для быстрого вычисления и использования хешей позиций, что важно для оптимизации работы транспозиционной таблицы в алгоритмах поиска.

## Documentation:
This project is a comprehensive implementation of a chess game, including AI logic, move generation, position evaluation, and a user interface. 
It utilizes C++ for core logic and SFML for graphics and audio representation. The project is organized and built using Visual Studio.

## C++ Source Files:
### AI.cpp / AI.h
Purpose: Implements the artificial intelligence logic for chess, including move selection algorithms, position evaluation, and multi-move lookahead strategies.
### Bitboard.h
Purpose: Defines structures and functions for working with bitboards, enabling efficient representation and manipulation of chessboard states and piece positions.
### LegalMoveGen.cpp / LegalMoveGen.h
Purpose: Responsible for generating all legal moves in the current chess position, considering rules such as check, checkmate, and stalemate.
### Main.cpp
Purpose: The entry point of the program. Initializes core components of the game, such as the user interface and the game loop.
### Move.cpp / Move.h
Purpose: Provides classes for representing chess moves, including the start and end positions, as well as any special moves like castling or en passant.
### MoveList.cpp / MoveList.h
Purpose: Manages a list of possible moves, offering functionality to add, remove, and sort moves in the context of game situation analysis.
### MoveSorter.cpp / MoveSorter.h
Purpose: Implements move sorting algorithms, for instance, to improve the efficiency of search algorithms by prioritizing the most promising moves.
### Position.cpp / Position.h
Purpose: Manages the current position on the chessboard, including piece placement, castling rights, en passant possibilities, etc.
### StaticEvaluator.cpp / StaticEvaluator.h
Purpose: Evaluates chess positions without making moves, using various heuristics such as material balance, pawn structure, piece activity, and king safety.
### UI.cpp / UI.h
Purpose: Implements the user interface for interacting with the game, including displaying the board, receiving user commands, and outputting messages.
### ZobristHash.cpp / ZobristHash.h
Purpose: Provides functionality for quickly computing and using position hashes, crucial for optimizing the performance of transposition tables in search algorithms.


