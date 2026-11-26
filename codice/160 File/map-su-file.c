Record e;
FILE *pf;

{ // e itera una sequenza S
    fwrite(&e, sizeof(Record), 1, pf);
}
// il file contiene la sequenza S