/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ibm_opencard_terminal_pcsc10_OCFPCSC1 */

#ifndef _Included_com_ibm_opencard_terminal_pcsc10_OCFPCSC1
#define _Included_com_ibm_opencard_terminal_pcsc10_OCFPCSC1
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: class_000240 */
/*
 * Class:     com_ibm_opencard_terminal_pcsc10_OCFPCSC1
 * Method:    initTrace
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_ibm_opencard_terminal_pcsc10_OCFPCSC1_initTrace
  (JNIEnv *, jobject);

/*
 * Class:     com_ibm_opencard_terminal_pcsc10_OCFPCSC1
 * Method:    SCardListReaders
 * Signature: (Ljava/lang/String;)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_ibm_opencard_terminal_pcsc10_OCFPCSC1_SCardListReaders
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_ibm_opencard_terminal_pcsc10_OCFPCSC1
 * Method:    SCardEstablishContext
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_opencard_terminal_pcsc10_OCFPCSC1_SCardEstablishContext
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_ibm_opencard_terminal_pcsc10_OCFPCSC1
 * Method:    SCardReleaseContext
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_ibm_opencard_terminal_pcsc10_OCFPCSC1_SCardReleaseContext
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_ibm_opencard_terminal_pcsc10_OCFPCSC1
 * Method:    SCardConnect
 * Signature: (ILjava/lang/String;IILjava/lang/Integer;)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_opencard_terminal_pcsc10_OCFPCSC1_SCardConnect
  (JNIEnv *, jobject, jint, jstring, jint, jint, jobject);

/*
 * Class:     com_ibm_opencard_terminal_pcsc10_OCFPCSC1
 * Method:    SCardReconnect
 * Signature: (IIIILjava/lang/Integer;)V
 */
JNIEXPORT void JNICALL Java_com_ibm_opencard_terminal_pcsc10_OCFPCSC1_SCardReconnect
  (JNIEnv *, jobject, jint, jint, jint, jint, jobject);

/*
 * Class:     com_ibm_opencard_terminal_pcsc10_OCFPCSC1
 * Method:    SCardDisconnect
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_ibm_opencard_terminal_pcsc10_OCFPCSC1_SCardDisconnect
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_ibm_opencard_terminal_pcsc10_OCFPCSC1
 * Method:    SCardGetStatusChange
 * Signature: (II[Lcom/ibm/opencard/terminal/pcsc10/PcscReaderState;)V
 */
JNIEXPORT void JNICALL Java_com_ibm_opencard_terminal_pcsc10_OCFPCSC1_SCardGetStatusChange
  (JNIEnv *, jobject, jint, jint, jobjectArray);

/*
 * Class:     com_ibm_opencard_terminal_pcsc10_OCFPCSC1
 * Method:    SCardGetAttrib
 * Signature: (II)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_ibm_opencard_terminal_pcsc10_OCFPCSC1_SCardGetAttrib
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_ibm_opencard_terminal_pcsc10_OCFPCSC1
 * Method:    SCardControl
 * Signature: (II[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_ibm_opencard_terminal_pcsc10_OCFPCSC1_SCardControl
  (JNIEnv *, jobject, jint, jint, jbyteArray);

/*
 * Class:     com_ibm_opencard_terminal_pcsc10_OCFPCSC1
 * Method:    SCardTransmit
 * Signature: (I[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_ibm_opencard_terminal_pcsc10_OCFPCSC1_SCardTransmit
  (JNIEnv *, jobject, jint, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
