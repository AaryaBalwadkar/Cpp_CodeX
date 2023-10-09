time_t now = time(0);
    tm *ltm = localtime(&now);

    cout<<"Date: "<<ltm->tm_mday<<"/"<<1+ltm->tm_mon<<"/"<<1900+ltm->tm_year;
    cout<<endl;

    cout<<"Time: ";
    cout<<1+ltm->tm_hour<<":";
    cout<<1+ltm->tm_min<<":";
    cout<<1+ltm->tm_sec;