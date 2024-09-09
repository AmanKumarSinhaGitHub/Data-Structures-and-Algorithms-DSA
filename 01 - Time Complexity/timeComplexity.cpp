/*

Time Complexity considers how many times each statement executes. 

---------------------------------------------------

Time Complexity Rules

-> Always consider the worst case scenerio
-> Avoid constant 
-> Avoid lower values

---------------------------------------------------


Three types of notation to calculate time complexity.

-> Big Oh (O) : Upper Bound
-> Theta (Θ) : Average
-> Omega (Ω) : Lower Bound


---------------------------------------------------

for(int i=0; i<n; i++){

    // Code
}

time complexity : O(n)
because code runs for n times.

---------------------------------------------------

for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){

        // Code

    }
}

time complexity : O(n square)
because code runs for n*n times.
---------------------------------------------------

*/