#include <assert.h>
#include "double_stack.h"

int doublestack_new(DoubleStack *this_, size_t alloc_size)
{
    assert(this_);
    assert(alloc_size > 0);

    double *data = (double *)calloc(alloc_size, sizeof(*data));
    if (!data)
    {
        return ZCPU_ERR_MEM_ALLOC;
    }
    this_->index = 0;
    this_->alloc_size = alloc_size;
    this_->data = data;

    return ZCPU_OK;
}

void doublestack_del(DoubleStack *this_)
{
    if (!this_)
        return;

    free(this_->data);
    this_->data = NULL;
    this_->index = 0;
    this_->alloc_size = 0;
}

int doublestack_push(DoubleStack *this_, double item)
{
    assert(this_);
    if (this_->index == this_->alloc_size)
    {
        return ZCPU_ERR_STACK_OVERFLOW;
    }
    this_->data[this_->index++] = item;

    return ZCPU_OK;
}

int doublestack_pop(DoubleStack *this_, double *item)
{
    assert(this_);

    if (this_->index == 0)
    {
        return ZCPU_ERR_STACK_UNDERFLOW;
    }
    this_->index--;
    if (item)
    {
        *item = this_->data[this_->index];
    }

    return ZCPU_OK;
}
