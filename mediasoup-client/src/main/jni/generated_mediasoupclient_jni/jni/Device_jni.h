// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/mediasoup/droid/Device

#ifndef org_mediasoup_droid_Device_JNI
#define org_mediasoup_droid_Device_JNI

#include <jni.h>

#include "../include/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_mediasoup_droid_Device[];
const char kClassPath_org_mediasoup_droid_Device[] = "org/mediasoup/droid/Device";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_mediasoup_droid_Device_clazz(nullptr);
#ifndef org_mediasoup_droid_Device_clazz_defined
#define org_mediasoup_droid_Device_clazz_defined
inline jclass org_mediasoup_droid_Device_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_mediasoup_droid_Device,
      &g_org_mediasoup_droid_Device_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace mediasoupclient {

static jlong JNI_Device_NewDevice(JNIEnv* env);

JNI_GENERATOR_EXPORT jlong Java_org_mediasoup_droid_Device_nativeNewDevice(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_Device_NewDevice(env);
}

static void JNI_Device_FreeDevice(JNIEnv* env, jlong device);

JNI_GENERATOR_EXPORT void Java_org_mediasoup_droid_Device_nativeFreeDevice(
    JNIEnv* env,
    jclass jcaller,
    jlong device) {
  return JNI_Device_FreeDevice(env, device);
}

static void JNI_Device_Load(JNIEnv* env, jlong device,
    const base::android::JavaParamRef<jstring>& routerRtpCapabilities,
    const base::android::JavaParamRef<jobject>& configuration,
    jlong peerConnectionFactory);

JNI_GENERATOR_EXPORT void Java_org_mediasoup_droid_Device_nativeLoad(
    JNIEnv* env,
    jclass jcaller,
    jlong device,
    jstring routerRtpCapabilities,
    jobject configuration,
    jlong peerConnectionFactory) {
  return JNI_Device_Load(env, device, base::android::JavaParamRef<jstring>(env,
      routerRtpCapabilities), base::android::JavaParamRef<jobject>(env, configuration),
      peerConnectionFactory);
}

static jboolean JNI_Device_IsLoaded(JNIEnv* env, jlong device);

JNI_GENERATOR_EXPORT jboolean Java_org_mediasoup_droid_Device_nativeIsLoaded(
    JNIEnv* env,
    jclass jcaller,
    jlong device) {
  return JNI_Device_IsLoaded(env, device);
}

static base::android::ScopedJavaLocalRef<jstring> JNI_Device_GetRtpCapabilities(JNIEnv* env, jlong
    device);

JNI_GENERATOR_EXPORT jstring Java_org_mediasoup_droid_Device_nativeGetRtpCapabilities(
    JNIEnv* env,
    jclass jcaller,
    jlong device) {
  return JNI_Device_GetRtpCapabilities(env, device).Release();
}

static jboolean JNI_Device_CanProduce(JNIEnv* env, jlong device,
    const base::android::JavaParamRef<jstring>& kind);

JNI_GENERATOR_EXPORT jboolean Java_org_mediasoup_droid_Device_nativeCanProduce(
    JNIEnv* env,
    jclass jcaller,
    jlong device,
    jstring kind) {
  return JNI_Device_CanProduce(env, device, base::android::JavaParamRef<jstring>(env, kind));
}

static base::android::ScopedJavaLocalRef<jobject> JNI_Device_CreateSendTransport(JNIEnv* env, jlong
    device,
    const base::android::JavaParamRef<jobject>& listener,
    const base::android::JavaParamRef<jstring>& id,
    const base::android::JavaParamRef<jstring>& iceParameters,
    const base::android::JavaParamRef<jstring>& iceCandidates,
    const base::android::JavaParamRef<jstring>& dtlsParameters,
    const base::android::JavaParamRef<jobject>& configuration,
    jlong peerConnectionFactory,
    const base::android::JavaParamRef<jstring>& appData);

JNI_GENERATOR_EXPORT jobject Java_org_mediasoup_droid_Device_nativeCreateSendTransport(
    JNIEnv* env,
    jclass jcaller,
    jlong device,
    jobject listener,
    jstring id,
    jstring iceParameters,
    jstring iceCandidates,
    jstring dtlsParameters,
    jobject configuration,
    jlong peerConnectionFactory,
    jstring appData) {
  return JNI_Device_CreateSendTransport(env, device, base::android::JavaParamRef<jobject>(env,
      listener), base::android::JavaParamRef<jstring>(env, id),
      base::android::JavaParamRef<jstring>(env, iceParameters),
      base::android::JavaParamRef<jstring>(env, iceCandidates),
      base::android::JavaParamRef<jstring>(env, dtlsParameters),
      base::android::JavaParamRef<jobject>(env, configuration), peerConnectionFactory,
      base::android::JavaParamRef<jstring>(env, appData)).Release();
}

static base::android::ScopedJavaLocalRef<jobject> JNI_Device_CreateRecvTransport(JNIEnv* env, jlong
    device,
    const base::android::JavaParamRef<jobject>& listener,
    const base::android::JavaParamRef<jstring>& id,
    const base::android::JavaParamRef<jstring>& iceParameters,
    const base::android::JavaParamRef<jstring>& iceCandidates,
    const base::android::JavaParamRef<jstring>& dtlsParameters,
    const base::android::JavaParamRef<jobject>& configuration,
    jlong peerConnectionFactory,
    const base::android::JavaParamRef<jstring>& appData);

JNI_GENERATOR_EXPORT jobject Java_org_mediasoup_droid_Device_nativeCreateRecvTransport(
    JNIEnv* env,
    jclass jcaller,
    jlong device,
    jobject listener,
    jstring id,
    jstring iceParameters,
    jstring iceCandidates,
    jstring dtlsParameters,
    jobject configuration,
    jlong peerConnectionFactory,
    jstring appData) {
  return JNI_Device_CreateRecvTransport(env, device, base::android::JavaParamRef<jobject>(env,
      listener), base::android::JavaParamRef<jstring>(env, id),
      base::android::JavaParamRef<jstring>(env, iceParameters),
      base::android::JavaParamRef<jstring>(env, iceCandidates),
      base::android::JavaParamRef<jstring>(env, dtlsParameters),
      base::android::JavaParamRef<jobject>(env, configuration), peerConnectionFactory,
      base::android::JavaParamRef<jstring>(env, appData)).Release();
}


}  // namespace mediasoupclient

#endif  // org_mediasoup_droid_Device_JNI
