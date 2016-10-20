// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8IDBCursor.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8IDBRequest.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/inspector/ConsoleMessage.h"
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
const WrapperTypeInfo V8IDBCursor::wrapperTypeInfo = { gin::kEmbedderBlink, V8IDBCursor::domTemplate, V8IDBCursor::refObject, V8IDBCursor::derefObject, V8IDBCursor::trace, 0, 0, V8IDBCursor::preparePrototypeObject, V8IDBCursor::installConditionallyEnabledProperties, "IDBCursor", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in IDBCursor.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& IDBCursor::s_wrapperTypeInfo = V8IDBCursor::wrapperTypeInfo;

namespace IDBCursorV8Internal {

static void sourceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    IDBCursor* impl = V8IDBCursor::toImpl(holder);
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    v8SetReturnValue(info, impl->source(scriptState).v8Value());
}

static void sourceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    IDBCursorV8Internal::sourceAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void directionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    IDBCursor* impl = V8IDBCursor::toImpl(holder);
    v8SetReturnValueString(info, impl->direction(), info.GetIsolate());
}

static void directionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    IDBCursorV8Internal::directionAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void keyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    v8::Local<v8::String> propertyName = v8AtomicString(info.GetIsolate(), "key");
    IDBCursor* impl = V8IDBCursor::toImpl(holder);
    if (!impl->isKeyDirty()) {
        v8::Local<v8::Value> v8Value = V8HiddenValue::getHiddenValue(info.GetIsolate(), holder, propertyName);
        if (!v8Value.IsEmpty()) {
            v8SetReturnValue(info, v8Value);
            return;
        }
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptValue cppValue(impl->key(scriptState));
    v8::Local<v8::Value> v8Value(cppValue.v8Value());
    V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, propertyName, v8Value);
    v8SetReturnValue(info, v8Value);
}

static void keyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    IDBCursorV8Internal::keyAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void primaryKeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    v8::Local<v8::String> propertyName = v8AtomicString(info.GetIsolate(), "primaryKey");
    IDBCursor* impl = V8IDBCursor::toImpl(holder);
    if (!impl->isPrimaryKeyDirty()) {
        v8::Local<v8::Value> v8Value = V8HiddenValue::getHiddenValue(info.GetIsolate(), holder, propertyName);
        if (!v8Value.IsEmpty()) {
            v8SetReturnValue(info, v8Value);
            return;
        }
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptValue cppValue(impl->primaryKey(scriptState));
    v8::Local<v8::Value> v8Value(cppValue.v8Value());
    V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, propertyName, v8Value);
    v8SetReturnValue(info, v8Value);
}

static void primaryKeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    IDBCursorV8Internal::primaryKeyAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void updateMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "update", "IDBCursor", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    IDBCursor* impl = V8IDBCursor::toImpl(info.Holder());
    ScriptValue value;
    {
        value = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RawPtr<IDBRequest> result = impl->update(scriptState, value, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void updateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    IDBCursorV8Internal::updateMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void advanceMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "advance", "IDBCursor", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    IDBCursor* impl = V8IDBCursor::toImpl(info.Holder());
    unsigned count;
    {
        count = toUInt32(info.GetIsolate(), info[0], EnforceRange, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->advance(count, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void advanceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    IDBCursorV8Internal::advanceMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void continueMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "continue", "IDBCursor", info.Holder(), info.GetIsolate());
    IDBCursor* impl = V8IDBCursor::toImpl(info.Holder());
    ScriptValue key;
    {
        key = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    impl->continueFunction(scriptState, key, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void continueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    IDBCursorV8Internal::continueMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void continuePrimaryKeyMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "continuePrimaryKey", "IDBCursor", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    IDBCursor* impl = V8IDBCursor::toImpl(info.Holder());
    ScriptValue key;
    ScriptValue primaryKey;
    {
        key = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);
        primaryKey = ScriptValue(ScriptState::current(info.GetIsolate()), info[1]);
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    impl->continuePrimaryKey(scriptState, key, primaryKey, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void continuePrimaryKeyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    IDBCursorV8Internal::continuePrimaryKeyMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void deleteMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "delete", "IDBCursor", info.Holder(), info.GetIsolate());
    IDBCursor* impl = V8IDBCursor::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RawPtr<IDBRequest> result = impl->deleteFunction(scriptState, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void deleteMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    IDBCursorV8Internal::deleteMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace IDBCursorV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8IDBCursorAccessors[] = {
    {"source", IDBCursorV8Internal::sourceAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"direction", IDBCursorV8Internal::directionAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"key", IDBCursorV8Internal::keyAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"primaryKey", IDBCursorV8Internal::primaryKeyAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8IDBCursorMethods[] = {
    {"update", IDBCursorV8Internal::updateMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"advance", IDBCursorV8Internal::advanceMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"continue", IDBCursorV8Internal::continueMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"delete", IDBCursorV8Internal::deleteMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8IDBCursorTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "IDBCursor", v8::Local<v8::FunctionTemplate>(), V8IDBCursor::internalFieldCount,
        0, 0,
        V8IDBCursorAccessors, WTF_ARRAY_LENGTH(V8IDBCursorAccessors),
        V8IDBCursorMethods, WTF_ARRAY_LENGTH(V8IDBCursorMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    if (RuntimeEnabledFeatures::indexedDBExperimentalEnabled()) {
        const V8DOMConfiguration::MethodConfiguration continuePrimaryKeyMethodConfiguration = {
            "continuePrimaryKey", IDBCursorV8Internal::continuePrimaryKeyMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, continuePrimaryKeyMethodConfiguration);
    }

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8IDBCursor::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8IDBCursorTemplate);
}

bool V8IDBCursor::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8IDBCursor::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

IDBCursor* V8IDBCursor::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8IDBCursor::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8IDBCursor::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink