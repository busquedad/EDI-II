#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_androidndksetuptestii_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "debuggin on samsung s10 device";
    return env->NewStringUTF(hello.c_str());
}
