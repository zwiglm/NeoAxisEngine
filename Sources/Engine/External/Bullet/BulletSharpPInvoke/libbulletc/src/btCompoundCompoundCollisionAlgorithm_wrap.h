#include "main.h"

#ifdef __cplusplus
extern "C" {
#endif
	EXPORT btCompoundCompoundCollisionAlgorithm_CreateFunc* btCompoundCompoundCollisionAlgorithm_CreateFunc_new();

	EXPORT btCompoundCompoundCollisionAlgorithm_SwappedCreateFunc* btCompoundCompoundCollisionAlgorithm_SwappedCreateFunc_new();

	EXPORT btCompoundCompoundCollisionAlgorithm* btCompoundCompoundCollisionAlgorithm_new(const btCollisionAlgorithmConstructionInfo* ci, const btCollisionObjectWrapper* body0Wrap, const btCollisionObjectWrapper* body1Wrap, bool isSwapped);
#ifdef __cplusplus
}
#endif
