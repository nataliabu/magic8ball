#include <iostream>
#include <cstdlib>
 
int main() {
    
    std::cout << "🎱 MAGIC 8-BALL:\n";
    
    // This sets the "seed" of the random number generator.
    srand(time(NULL));
    
    int answer = std::rand() % 10;

    if (answer == 0) {
        std::cout << "It is certain\n";
    }
    
    else if (answer == 1) {
        std::cout << "Fo sho!\n";
    }
    
    else if (answer == 2) {
        std::cout << "Oui oui\n";
    }
    
    else if (answer == 3) {
        std::cout << "Could be\n";
    }
    
    else if (answer == 4) {
        std::cout << "Sí señores\n";
    }
             
    else if (answer == 5) {
        std::cout << "I wouldn't be so convinced\n";
    }
              
    else if (answer == 6) {
        std::cout << "I doubt it\n";
    }
               
    else if (answer == 7) {
        std::cout << "Naaah\n";
    }
                
    else if (answer == 8) {
        std::cout << "Let me think about it and ask again later\n";
    }
                 
    else {
        std::cout << "Very doubtful\n";

    }
    
    return 0;
}
