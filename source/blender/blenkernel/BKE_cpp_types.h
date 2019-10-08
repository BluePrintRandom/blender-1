#ifndef __BKE_CPP_TYPES_H__
#define __BKE_CPP_TYPES_H__

#include "BKE_cpp_type.h"

namespace BKE {

void init_data_types();
void free_data_types();

template<typename T> CPPType &get_cpp_type();

}  // namespace BKE

#endif /* __BKE_CPP_TYPES_H__ */
