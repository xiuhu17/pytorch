#include "caffe2/core/tensor.h"
#include "caffe2/core/flags.h"

CAFFE2_DEFINE_bool(
    caffe2_keep_on_shrink,
    true,
    "If set, keeps memory when a tensor is shrinking its size.");

namespace caffe2 {
// declaring it here instead of context.cc because tensor.h includes context.h
CAFFE_KNOWN_TYPE(Tensor<CPUContext>);
}
