#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int n;
int v[100002];

int l, r;

int issorted() {
    for (int i = 1; i <= n; i++)
        if (v[i-1] > v[i])
            return 0;
    return 1;
}

int testreverse() {
    int i;
    
    int first;
    for (i = 1; i <= n; i++) {
        if (v[i-1] > v[i]) {
            first = i;
            break;
        }
    }
    if (i == n+1) return 0; // sorted!

    int second;
    for (i = first+1; i <= n; i++) {
        if (v[i-1] < v[i]) {
            second = i;
            break;
        }
    }
    if (i == n+1) {
        l = first - 1;
        r = n;
        return (v[n] >= v[first-2]);
    }

    // Rest sorted?
    for (i = second+1; i <= n; i++) {
        if (v[i-1] > v[i])
            return 0;
    }

    l = first - 1;
    r = second - 1;
    return (v[first-1] <= v[second] && v[second-1] >= v[first-2]);
}

int testswap() {
    int i;
    
    int first;
    for (i = 1; i <= n; i++) {
        if (v[i-1] > v[i]) {
            first = i;
            break;
        }
    }
    if (i == n+1) return 0; // sorted!

    if (v[first-2] > v[first]) {
        return 0;
    }
    
    int second;
    for (i = first+1; i <= n; i++) {
        if (v[i-1] > v[i]) {
            second = i;
            break;
        }
    }
    if (i == n+1) {
        return 0;
    }

    // Rest sorted?
    for (i = second+1; i <= n; i++) {
        if (v[i-1] > v[i])
            return 0;
    }
    
//    l = first - 1;
//   r = second - 1;
//    return (v[first-1] <= v[second] && v[second-1] >= v[first-2]);
    l = first - 1;
    r = second;
    return (v[l-1] <= v[r] && v[r] <= v[l+1] && v[r-1] <= v[l] && v[l] <= v[r+1]);
}



int main() {
    int stage = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i+1]);
    v[0] = INT_MIN;
    v[n+1] = INT_MAX;

    int first;
    
    // Sorted?
    if (issorted()) {
        printf("yes\n");
        return 0;
    }

    if (testreverse()) {
        int i;
        for (i = l; i < r; i++) if (v[l] != v[i]) break;
        if (i == r)
            printf("yes\nswap %d %d", l, r);
        else
            printf("yes\nreverse %d %d", l, r);
        return 0;
    }

    if (testswap()) {
        printf("yes\nswap %d %d", l, r);
        return 0;
    }

    
    printf("no");
}