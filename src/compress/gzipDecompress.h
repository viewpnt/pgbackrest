/***********************************************************************************************************************************
Gzip Decompress

Decompress IO from the gzip format.
***********************************************************************************************************************************/
#ifndef COMPRESS_GZIPDECOMPRESS_H
#define COMPRESS_GZIPDECOMPRESS_H

/***********************************************************************************************************************************
Object type
***********************************************************************************************************************************/
typedef struct GzipDecompress GzipDecompress;

#include "common/io/filter/filter.h"
#include "common/type/string.h"

/***********************************************************************************************************************************
Constructor
***********************************************************************************************************************************/
GzipDecompress *gzipDecompressNew(bool raw);

/***********************************************************************************************************************************
Functions
***********************************************************************************************************************************/
void gzipDecompressProcess(GzipDecompress *this, const Buffer *compressed, Buffer *uncompressed);

/***********************************************************************************************************************************
Getters
***********************************************************************************************************************************/
bool gzipDecompressDone(const GzipDecompress *this);
IoFilter *gzipDecompressFilter(const GzipDecompress *this);
bool gzipDecompressInputSame(const GzipDecompress *this);

/***********************************************************************************************************************************
Destructor
***********************************************************************************************************************************/
void gzipDecompressFree(GzipDecompress *this);

/***********************************************************************************************************************************
Macros for function logging
***********************************************************************************************************************************/
size_t gzipDecompressToLog(const GzipDecompress *this, char *buffer, size_t bufferSize);

#define FUNCTION_DEBUG_GZIP_DECOMPRESS_TYPE                                                                                        \
    GzipDecompress *
#define FUNCTION_DEBUG_GZIP_DECOMPRESS_FORMAT(value, buffer, bufferSize)                                                           \
    gzipDecompressToLog(value, buffer, bufferSize)

#endif
