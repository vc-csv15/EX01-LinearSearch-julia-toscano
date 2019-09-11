//
// Created by vscilab on 9/11/2019.
//

#ifndef EX01_LINEARSEARCH_JULIA_TOSCANO_LINEARSEARCH_H
#define EX01_LINEARSEARCH_JULIA_TOSCANO_LINEARSEARCH_H

#endif //EX01_LINEARSEARCH_JULIA_TOSCANO_LINEARSEARCH_H

namespace edu { namespace vcccd { namespace vc { namespace csv15 {

                template<class T>
                int64_t find(const T &value, T array[], size_t size) {
                    // put your code here
                    if (array == nullptr) return -1;
                    for (size_t i = 0; i < size; i++) {  // array[i] is a pointer, and can be null if you do not reference the pointer, check for null or just prevent the loop from going at all by adding, if (array == nullptr) return -1;.
                        if (value == array[i]) return i; //it returns the index in the array of where it found the value or return -1 if it doesn't find the value
                    }
                    return -1;
                }
            }}}}