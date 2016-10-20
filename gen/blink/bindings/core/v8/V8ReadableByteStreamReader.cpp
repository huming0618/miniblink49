// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8ReadableByteStreamReader.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8ReadableByteStreamReader::wrapperTypeInfo = { gin::kEmbedderBlink, V8ReadableByteStreamReader::domTemplate, V8ReadableByteStreamReader::refObject, V8ReadableByteStreamReader::derefObject, V8ReadableByteStreamReader::trace, 0, 0, V8ReadableByteStreamReader::preparePrototypeObject, V8ReadableByteStreamReader::installConditionallyEnabledProperties, "ReadableByteStreamReader", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ReadableByteStreamReader.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& ReadableByteStreamReader::s_wrapperTypeInfo = V8ReadableByteStreamReader::wrapperTypeInfo;

namespace ReadableByteStreamReaderV8Internal {

static void closedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ReadableByteStreamReader* impl = V8ReadableByteStreamReader::toImpl(holder);
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    v8SetReturnValue(info, impl->closed(scriptState).v8Value());
}

static void closedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    ReadableByteStreamReaderV8Internal::closedAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void readMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ReadableByteStreamReader* impl = V8ReadableByteStreamReader::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->read(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void readMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ReadableByteStreamReaderV8Internal::readMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void cancelMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ReadableByteStreamReader* impl = V8ReadableByteStreamReader::toImpl(info.Holder());
    ScriptValue reason;
    {
        if (UNLIKELY(info.Length() <= 0)) {
            ScriptState* scriptState = ScriptState::current(info.GetIsolate());
            ScriptPromise result = impl->cancel(scriptState);
            v8SetReturnValue(info, result.v8Value());
            return;
        }
        reason = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->cancel(scriptState, reason);
    v8SetReturnValue(info, result.v8Value());
}

static void cancelMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ReadableByteStreamReaderV8Internal::cancelMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void releaseLockMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "releaseLock", "ReadableByteStreamReader", info.Holder(), info.GetIsolate());
    ReadableByteStreamReader* impl = V8ReadableByteStreamReader::toImpl(info.Holder());
    impl->releaseLock(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void releaseLockMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ReadableByteStreamReaderV8Internal::releaseLockMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace ReadableByteStreamReaderV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8ReadableByteStreamReaderAccessors[] = {
    {"closed", ReadableByteStreamReaderV8Internal::closedAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8ReadableByteStreamReaderMethods[] = {
    {"read", ReadableByteStreamReaderV8Internal::readMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"cancel", ReadableByteStreamReaderV8Internal::cancelMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"releaseLock", ReadableByteStreamReaderV8Internal::releaseLockMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8ReadableByteStreamReaderTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "ReadableByteStreamReader", v8::Local<v8::FunctionTemplate>(), V8ReadableByteStreamReader::internalFieldCount,
        0, 0,
        V8ReadableByteStreamReaderAccessors, WTF_ARRAY_LENGTH(V8ReadableByteStreamReaderAccessors),
        V8ReadableByteStreamReaderMethods, WTF_ARRAY_LENGTH(V8ReadableByteStreamReaderMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8ReadableByteStreamReader::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8ReadableByteStreamReaderTemplate);
}

bool V8ReadableByteStreamReader::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8ReadableByteStreamReader::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

ReadableByteStreamReader* V8ReadableByteStreamReader::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8ReadableByteStreamReader::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8ReadableByteStreamReader::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink