#ifndef __COMMONDEF_H__
#define __COMMONDEF_H__

// Memory request type enumerator
enum REQ_OP
{
    READ,
    WRITE,
    FETCH
};

std::ostream& operator<<(std::ostream& os, REQ_OP req)
{
    switch (req)
    {
        case 0: os << "READ"; break;
        case 1: os << "WRITE"; break;
        case 2: os << "FETCH"; break;
        default: os << "UNKWN"; break;
    }
    return os;
}

#endif