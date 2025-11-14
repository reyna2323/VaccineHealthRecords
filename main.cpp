void display() {
            displayRecord();
            if (shingles) {
                cout << "Shingles vaccine recieved." << endl;
            }
            if (!shingles && age > 50) {
                cout << "Warning! Shingles vaccine needed." << endl;
            }
        }
