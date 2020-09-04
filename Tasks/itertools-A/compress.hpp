#ifndef _COMPRESS_HPP
#define _COMPRESS_HPP
#include <iostream>
#include<vector>
namespace itertools{
  
    template< typename T , typename L > 
    class compress{
        T _set1;
        L _set2;

        public :            
            compress(const T & a , const L& b):_set1(a), _set2(b){}

            class const_iterator{
                typename T::const_iterator _cur1;
                typename T::const_iterator _end1;
                typename L::const_iterator _cur2;
                typename L::const_iterator _end2;
                public:
                    const_iterator(const typename T::const_iterator &s1, const typename T::const_iterator &e1 
                    ,const typename L::const_iterator &s2, const typename L::const_iterator &e2) :
                    _cur1(s1) , _end1(e1) , _cur2(s2) , _end2(e2) {}

                    
                    
                     auto operator *() {// <{5}, {5, 6}, {5, 6, 7}> [](int a, int b){return a+b;}
                        if(!(*_cur2))
                            const_iterator::operator++();
                        return *_cur1;
                     }

                    const_iterator & operator ++(){
                        do{
                            ++_cur1;
                            ++_cur2;
                            } while (_cur1 != _end1 && !(*_cur2));
                        return *this;
                        }

                    const const_iterator & operator++(int){
                        const_iterator temp = *this;
                        const_iterator::operator++();
                        return temp;
                    }

                    bool operator ==(const const_iterator &other){
                        return ((this->_cur1 == other._cur1) && (this->_cur2 == other._cur2)) ;
                    }

                    bool operator !=(const const_iterator &other){
                        return ((this->_cur1 != other._cur1) || (this->_cur2 != other._cur2)) ;
                    }
            };
            const_iterator begin() const{
                return const_iterator(_set1.begin(), _set1.end(), _set2.begin(), _set2.end());
                }
            const_iterator end() const{
                return const_iterator(_set1.end(), _set1.end(), _set2.end(), _set2.end());
                }
            

    };


}

#endif
