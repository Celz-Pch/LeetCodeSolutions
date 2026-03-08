int passThePillow(int n, int time) {
    int pillow = 1;
    int dir = 1;

    for (int i = 0; i < time; i++) {
        if (pillow == n)
            dir = -1;
        if (pillow == 1)
            dir = 1;
        pillow += dir;
    }
    return pillow;
}
