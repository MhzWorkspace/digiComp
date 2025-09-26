# digiComp
# Grab App (C++ Project)

This is a simple simulation of the Grab application with three main features:
- 🚗 Grab Ride
- 🍔 Grab Food
- 💰 Grab Wallet (balance, top-up, and history)

---

## 📂 Project Structure
main.cpp // Main program (homepage + menu)
grabfood.cpp // GrabFood implementation
grabfood.h // GrabFood header
wallet.cpp // Wallet implementation
wallet.h // Wallet header
.vscode/
tasks.json // Build configuration
launch.json // Run configuration

---

## ▶ How to Run

### Option 1: Run inside VS Code (Recommended)
1. Open this project folder in **Visual Studio Code**.  
2. Make sure the `.vscode/` folder (with `tasks.json` and `launch.json`) is included.  
3. Click the **Run without debugging button**.  
   - VS Code will automatically **build** and **run** the program.  
4. A terminal window will open where you can interact with the app.  

---

### Option 2: Compile & Run Manually (Mac/Linux Terminal)
If you prefer running from terminal:  
```bash
g++ main.cpp grabfood.cpp wallet.cpp -o grabapp
./grabapp
