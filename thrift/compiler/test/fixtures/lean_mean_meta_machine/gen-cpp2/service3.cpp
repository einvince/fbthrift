/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/lean_mean_meta_machine/gen-cpp2/service3.h"

#include "thrift/compiler/test/fixtures/lean_mean_meta_machine/gen-cpp2/service3.tcc"

#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace test_cpp2 { namespace cpp_reflection {

std::unique_ptr<apache::thrift::AsyncProcessor> service3SvIf::getProcessor() {
  return folly::make_unique<service3AsyncProcessor>(this);
}

void service3SvIf::methodA() {
  throw apache::thrift::TApplicationException("Function methodA is unimplemented");
}

folly::Future<folly::Unit> service3SvIf::future_methodA() {
  return apache::thrift::detail::si::future([&] { return methodA(); });
}

void service3SvIf::async_tm_methodA(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_methodA(); });
}

void service3SvIf::methodB(int32_t /*x*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*y*/, double /*z*/) {
  throw apache::thrift::TApplicationException("Function methodB is unimplemented");
}

folly::Future<folly::Unit> service3SvIf::future_methodB(int32_t x, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> y, double z) {
  return apache::thrift::detail::si::future([&] { return methodB(x, std::move(y), z); });
}

void service3SvIf::async_tm_methodB(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int32_t x, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> y, double z) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_methodB(x, std::move(y), z); });
}

int32_t service3SvIf::methodC() {
  throw apache::thrift::TApplicationException("Function methodC is unimplemented");
}

folly::Future<int32_t> service3SvIf::future_methodC() {
  return apache::thrift::detail::si::future([&] { return methodC(); });
}

void service3SvIf::async_tm_methodC(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_methodC(); });
}

int32_t service3SvIf::methodD(int32_t /*i*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*j*/, double /*k*/) {
  throw apache::thrift::TApplicationException("Function methodD is unimplemented");
}

folly::Future<int32_t> service3SvIf::future_methodD(int32_t i, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> j, double k) {
  return apache::thrift::detail::si::future([&] { return methodD(i, std::move(j), k); });
}

void service3SvIf::async_tm_methodD(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback, int32_t i, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> j, double k) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_methodD(i, std::move(j), k); });
}

void service3SvIf::methodE( ::test_cpp2::cpp_reflection::struct2& /*_return*/) {
  throw apache::thrift::TApplicationException("Function methodE is unimplemented");
}

folly::Future<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> service3SvIf::future_methodE() {
  return apache::thrift::detail::si::future_returning_uptr([&]( ::test_cpp2::cpp_reflection::struct2& _return) { methodE(_return); });
}

void service3SvIf::async_tm_methodE(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_methodE(); });
}

void service3SvIf::methodF( ::test_cpp2::cpp_reflection::struct3& /*_return*/, int32_t /*l*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*m*/, double /*n*/) {
  throw apache::thrift::TApplicationException("Function methodF is unimplemented");
}

folly::Future<std::unique_ptr< ::test_cpp2::cpp_reflection::struct3>> service3SvIf::future_methodF(int32_t l, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> m, double n) {
  return apache::thrift::detail::si::future_returning_uptr([&]( ::test_cpp2::cpp_reflection::struct3& _return) { methodF(_return, l, std::move(m), n); });
}

void service3SvIf::async_tm_methodF(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::test_cpp2::cpp_reflection::struct3>>> callback, int32_t l, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> m, double n) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_methodF(l, std::move(m), n); });
}

void service3SvNull::methodA() {}

void service3SvNull::methodB(int32_t /*x*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*y*/, double /*z*/) {}

int32_t service3SvNull::methodC() {
  return 0;
}

int32_t service3SvNull::methodD(int32_t /*i*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*j*/, double /*k*/) {
  return 0;
}

void service3SvNull::methodE( ::test_cpp2::cpp_reflection::struct2& /*_return*/) {}

void service3SvNull::methodF( ::test_cpp2::cpp_reflection::struct3& /*_return*/, int32_t /*l*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*m*/, double /*n*/) {}

const char* service3AsyncProcessor::getServiceName() {
  return "service3";
}

folly::Optional<std::string> service3AsyncProcessor::getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) {
  return apache::thrift::detail::ap::get_cache_key(buf, protType, cacheKeyMap_);
}

void service3AsyncProcessor::process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(buf), protType, context, eb, tm);
}

bool service3AsyncProcessor::isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) {
  return apache::thrift::detail::ap::is_oneway_method(buf, header, onewayMethods_);
}

std::unordered_set<std::string> service3AsyncProcessor::onewayMethods_ {};
std::unordered_map<std::string, int16_t> service3AsyncProcessor::cacheKeyMap_ {};
const service3AsyncProcessor::BinaryProtocolProcessMap& service3AsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

service3AsyncProcessor::BinaryProtocolProcessMap service3AsyncProcessor::binaryProcessMap_ {
  {"methodA", &service3AsyncProcessor::_processInThread_methodA<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"methodB", &service3AsyncProcessor::_processInThread_methodB<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"methodC", &service3AsyncProcessor::_processInThread_methodC<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"methodD", &service3AsyncProcessor::_processInThread_methodD<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"methodE", &service3AsyncProcessor::_processInThread_methodE<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"methodF", &service3AsyncProcessor::_processInThread_methodF<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}
};
const service3AsyncProcessor::CompactProtocolProcessMap& service3AsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

service3AsyncProcessor::CompactProtocolProcessMap service3AsyncProcessor::compactProcessMap_ {
  {"methodA", &service3AsyncProcessor::_processInThread_methodA<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"methodB", &service3AsyncProcessor::_processInThread_methodB<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"methodC", &service3AsyncProcessor::_processInThread_methodC<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"methodD", &service3AsyncProcessor::_processInThread_methodD<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"methodE", &service3AsyncProcessor::_processInThread_methodE<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"methodF", &service3AsyncProcessor::_processInThread_methodF<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>}
};

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift