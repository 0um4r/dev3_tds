#ifndef IMO_H
#define IMO_H

struct Moment
{
    unsigned hours;
    unsigned minutes;
    unsigned seconds;
};

struct Date
{
    unsigned year;
    unsigned month;
    unsigned day;
};

struct MbonguosseEvent
{
    struct Date dateEvent;
    struct Moment momentEvent;
    const char * nameEvent;
};

#endif // IMO_H
