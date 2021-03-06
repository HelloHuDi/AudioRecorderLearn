/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_speex1_Speex */

#ifndef _Included_com_example_speex1_Speex
#define _Included_com_example_speex1_Speex
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_speex1_Speex
 * Method:    open
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_example_speex1_Speex_open
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_example_speex1_Speex
 * Method:    getFrameSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_example_speex1_Speex_getFrameSize
  (JNIEnv *, jobject);

/*
 * Class:     com_example_speex1_Speex
 * Method:    decode
 * Signature: ([B[SI)I
 */
JNIEXPORT jint JNICALL Java_com_example_speex1_Speex_decode
  (JNIEnv *, jobject, jbyteArray, jshortArray, jint);

/*
 * Class:     com_example_speex1_Speex
 * Method:    encode
 * Signature: ([SI[BI)I
 */
JNIEXPORT jint JNICALL Java_com_example_speex1_Speex_encode
  (JNIEnv *, jobject, jshortArray, jint, jbyteArray, jint);

/*
 * Class:     com_example_speex1_Speex
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_speex1_Speex_close
  (JNIEnv *, jobject);

/*
 * Class:     com_example_speex1_Speex
 * Method:    initEcho
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_example_speex1_Speex_initEcho
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_example_speex1_Speex
 * Method:    echoCancellation
 * Signature: ([S[S[S)V
 */
JNIEXPORT void JNICALL Java_com_example_speex1_Speex_echoCancellation
  (JNIEnv *, jobject, jshortArray, jshortArray, jshortArray);

/*
 * Class:     com_example_speex1_Speex
 * Method:    echoCancellationEncode
 * Signature: ([S[S[B)I
 */
JNIEXPORT jint JNICALL Java_com_example_speex1_Speex_echoCancellationEncode
  (JNIEnv *, jobject, jshortArray, jshortArray, jbyteArray);

/*
 * Class:     com_example_speex1_Speex
 * Method:    destroyEcho
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_speex1_Speex_destroyEcho
  (JNIEnv *, jobject);

/*
 * Class:     com_example_speex1_Speex
 * Method:    getAecStatus
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_example_speex1_Speex_getAecStatus
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
