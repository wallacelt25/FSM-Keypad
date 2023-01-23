void states(int s0, int s1, int L, int A, int* S0, int* S1, int* O) {
    *S0 = s1 & (!L);
    *S1 = (!s0) & L | s0 & (!A);
    *O = (!s0) & L | s0 & (!A);
}