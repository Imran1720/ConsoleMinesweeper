#  💣 Minesweeper Console Game 💣
A classic Minesweeper game implemented in C++ with clean object-oriented design. Built as a console application, this game offers a smooth, interactive experience that mimics the traditional Minesweeper puzzle with randomized mines and cell opening logic.The first cell opened is always safe. The game automatically calculates the number of adjacent mines for each cell and displays it once the cell is opened.

### Gameplay:
![image alt](https://github.com/Imran1720/ConsoleMinesweeper/blob/39dbbdf4563290e87e6bccdeb3dbb0a55831565c/Output/Console%20Minesweeper.gif)


### ScreenShots:
![image alt](https://github.com/Imran1720/ConsoleMinesweeper/blob/699cb2653637ac168ebe9673249025c7d660e0a0/Output/Output_Screenshots.png)


### ✨ Features
<ol>
<li><b> 10x10 board size</b></li>
<li><b> Randomized mine placement</b></li>
<li><b> First-click safety (no mine on the first selected cell)</b></li>
<li><b> Calculates and displays the number of adjacent mines</b></li>
<li><b> Displays board using ASCII UI</b></li>
<li><b> Ends game when a mine is revealed</b></li>
</ol>

### 🔁 GameLoop:
<ol>
<li> Prompts the player to start </li>
<li> Accepts X and Y coordinate input</li>
<li> Ensures input is within bounds</li>
<li> Reveals cell values or ends the game if a mine is clicked</li>
<li> Tracks whether the game is still running</li>
<li> Checks for win/loss conditions and displays a final message</li>
</ol>

### 🖥️ UI:
<ul>
  <li> " " for unopened cells</li>
  <li> Numbers (0-9) for cells indicating adjacent mine counts</li>
  <li> "*" to reveal mines after game over</li>
</ul>

## How to Play:
<ol>
  <li> Run the program from your console.</li>
  <li> Press S or s when prompted to start the game.</li>
  <li> Enter X and Y coordinates (from 0 to 9) when asked to select a cell.</li>
  <li> The selected cell will be opened:
    <ul>
      <li>If it’s a mine, the game ends.</li>
      <li>If it’s not, it shows the number of adjacent mines.</li>
    </ul>
  </li> Keep playing until all non-mine cells are opened to win.</li>
</ol>
