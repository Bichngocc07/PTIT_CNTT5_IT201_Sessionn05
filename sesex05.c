//
// Created by Owner on 6/26/2025.
//
int isPrime(char arr[], int lert,int right) {
    if(lert<=1 || lert>right) {
        return 0;
    }
    // if (str[left])!= str[right] {
    //     return 0;
    // }
}
int main() {
    char str[100];
    printf("Nhap a string: ");
    fgets(str,100,stdin);
    int len = strlen(str);
    int result=isPrime(str,len,10);
    if(result==1) {
        printf("xong");
    } else {
        printf("nhat");
    }

}