int main() {
    unsigned int N;
    scanf("%u", &N);
    unsigned int mask = 0xFF000000;
    unsigned int result = N ^ mask;
    printf("%u\n", result);
    
    return 0;
}
