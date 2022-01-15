var n, a1, a2, a3, a4, a5;
n = 200;
a1=1;
a2=0;
a3=3;
a4=2;
a5=0;
var b1 = 0, b2 = 0, b3 = 0, b4 = 0, b5 = 0;

function chiagao1() {
    if (n >= (100 * a1)) {
        b1 += a1;
        n -= 100 * a1;
    }
    else {
        if (a1 == 0) return;
        a1--;
        chiagao1();
    }
}

function chiagao2() {
    if (n == 0) return;
    if (n >= (50 * a2)) {
        b2 += a2;
        n -= 50 * a2;
    }
    else {
        if (a2 == 0) return;
        a2--;
        chiagao2();
    }
}

function chiagao3() {
    if (n == 0) return;
    if (n >= (20 * a3)) {
        b3 += a3;
        n -= 20 * a3;
    }
    else {
        if (a3 == 0) return;
        a3--;
        chiagao3();
    }
}

function chiagao4() {
    if (n == 0) return;
    if (n >= (10 * a4)) {
        b4 += a4;
        n -= 10 * a4;
    }
    else {
        if (a4 == 0) return;
        a4--;
        chiagao4();
    }
}

function chiagao5() {
    if (n == 0) return;
    if (n >= (5 * a5)) {
        b5 += a5;
        n -= 5 * a5;
    }
    else {
        if (a5 == 0) return;
        a5--;
        chiagao5();
    }
}

chiagao1();
chiagao2();
chiagao3();
chiagao4();
chiagao5();

console.log(String(n));
console.log(String(b1));
console.log(String(b2));
console.log(String(b3));
console.log(String(b4));
console.log(String(b5));