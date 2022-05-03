#ifndef _LLOG_HPP_
#define _LLOG_HPP_

#include <sys/time.h>
#include <iostream>

#define LOGGER  Llog() << __FILE__ << __FUNCTION__ << __LINE__

class Llog
{
public:
    Llog()
    {
        if (tvS.tv_sec == 0)
        {
            gettimeofday(&tvS, NULL);
        }
    }

    ~Llog()
    {
        struct timeval tvE;
        gettimeofday(&tvE, NULL);
        str += std::to_string(((double)tvE.tv_sec-tvS.tv_sec)*1000 + ((double)tvE.tv_usec-tvS.tv_usec)/1000);
        str += " ms";
        std::cout << str << std::endl;
    }

    Llog& operator << (uint16_t num)
    {
        str += std::to_string(num);
        str += "   ";
        return *this;
    }

    Llog& operator << (std::string s)
    {
        str += s;
        str += "   ";
        return *this;
    }

private:
    static struct timeval tvS;
    std::string str;
};

#endif