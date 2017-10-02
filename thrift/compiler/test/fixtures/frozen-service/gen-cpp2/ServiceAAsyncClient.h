/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <folly/futures/Future.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/ServiceIncludes.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include <thrift/lib/cpp2/async/HeaderChannel.h>
#include "src/gen-cpp2/module_types.h"
#include "src/gen-cpp2/module_layouts.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  class Frozen2ProtocolReader;
  namespace transport { class THeader; }
}}

namespace some { namespace ns {

class ServiceAAsyncClient : public apache::thrift::TClientBase {
 public:
  virtual const char* getServiceName();
  typedef std::unique_ptr<apache::thrift::RequestChannel, folly::DelayedDestruction::Destructor> channel_ptr;

  virtual ~ServiceAAsyncClient() {}

  ServiceAAsyncClient(std::shared_ptr<apache::thrift::RequestChannel> channel) :
      channel_(channel) {
    connectionContext_.reset(new apache::thrift::Cpp2ConnContext);
  }

  apache::thrift::RequestChannel*  getChannel() {
    return this->channel_.get();
  }

  apache::thrift::HeaderChannel*  getHeaderChannel() {
    return dynamic_cast<apache::thrift::HeaderChannel*>(this->channel_.get());
  }
  virtual void moduleAMethod(std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::some::ns::ModuleA& modArg);
  virtual void moduleAMethod(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::some::ns::ModuleA& modArg);
 private:
  virtual void moduleAMethodImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::some::ns::ModuleA& modArg);
 public:
  virtual void sync_moduleAMethod(const  ::some::ns::ModuleA& modArg);
  virtual void sync_moduleAMethod(apache::thrift::RpcOptions& rpcOptions, const  ::some::ns::ModuleA& modArg);
  virtual folly::Future<folly::Unit> future_moduleAMethod(const  ::some::ns::ModuleA& modArg);
  virtual folly::Future<folly::Unit> future_moduleAMethod(apache::thrift::RpcOptions& rpcOptions, const  ::some::ns::ModuleA& modArg);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_moduleAMethod(apache::thrift::RpcOptions& rpcOptions, const  ::some::ns::ModuleA& modArg);
  virtual void moduleAMethod(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const  ::some::ns::ModuleA& modArg);
  static folly::exception_wrapper recv_wrapped_moduleAMethod(::apache::thrift::ClientReceiveState& state);
  static void recv_moduleAMethod(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_moduleAMethod(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_moduleAMethod(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void moduleAMethodT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::some::ns::ModuleA& modArg);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_moduleAMethodT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_moduleAMethodT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void moduleBMethod(std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::some::ns::ModuleB& modArg);
  virtual void moduleBMethod(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::some::ns::ModuleB& modArg);
 private:
  virtual void moduleBMethodImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::some::ns::ModuleB& modArg);
 public:
  virtual void sync_moduleBMethod(const  ::some::ns::ModuleB& modArg);
  virtual void sync_moduleBMethod(apache::thrift::RpcOptions& rpcOptions, const  ::some::ns::ModuleB& modArg);
  virtual folly::Future<folly::Unit> future_moduleBMethod(const  ::some::ns::ModuleB& modArg);
  virtual folly::Future<folly::Unit> future_moduleBMethod(apache::thrift::RpcOptions& rpcOptions, const  ::some::ns::ModuleB& modArg);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_moduleBMethod(apache::thrift::RpcOptions& rpcOptions, const  ::some::ns::ModuleB& modArg);
  virtual void moduleBMethod(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const  ::some::ns::ModuleB& modArg);
  static folly::exception_wrapper recv_wrapped_moduleBMethod(::apache::thrift::ClientReceiveState& state);
  static void recv_moduleBMethod(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_moduleBMethod(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_moduleBMethod(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void moduleBMethodT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::some::ns::ModuleB& modArg);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_moduleBMethodT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_moduleBMethodT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void i32StrDoubleMethod(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32Arg, const std::string& strArg, double doubleArg);
  virtual void i32StrDoubleMethod(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32Arg, const std::string& strArg, double doubleArg);
 private:
  virtual void i32StrDoubleMethodImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32Arg, const std::string& strArg, double doubleArg);
 public:
  virtual void sync_i32StrDoubleMethod(int32_t i32Arg, const std::string& strArg, double doubleArg);
  virtual void sync_i32StrDoubleMethod(apache::thrift::RpcOptions& rpcOptions, int32_t i32Arg, const std::string& strArg, double doubleArg);
  virtual folly::Future<folly::Unit> future_i32StrDoubleMethod(int32_t i32Arg, const std::string& strArg, double doubleArg);
  virtual folly::Future<folly::Unit> future_i32StrDoubleMethod(apache::thrift::RpcOptions& rpcOptions, int32_t i32Arg, const std::string& strArg, double doubleArg);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_i32StrDoubleMethod(apache::thrift::RpcOptions& rpcOptions, int32_t i32Arg, const std::string& strArg, double doubleArg);
  virtual void i32StrDoubleMethod(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t i32Arg, const std::string& strArg, double doubleArg);
  static folly::exception_wrapper recv_wrapped_i32StrDoubleMethod(::apache::thrift::ClientReceiveState& state);
  static void recv_i32StrDoubleMethod(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_i32StrDoubleMethod(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_i32StrDoubleMethod(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void i32StrDoubleMethodT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32Arg, const std::string& strArg, double doubleArg);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_i32StrDoubleMethodT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_i32StrDoubleMethodT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void versioningMethod(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32Arg, const std::string& strArg, double doubleArg);
  virtual void versioningMethod(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32Arg, const std::string& strArg, double doubleArg);
 private:
  virtual void versioningMethodImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32Arg, const std::string& strArg, double doubleArg);
 public:
  virtual void sync_versioningMethod(int32_t i32Arg, const std::string& strArg, double doubleArg);
  virtual void sync_versioningMethod(apache::thrift::RpcOptions& rpcOptions, int32_t i32Arg, const std::string& strArg, double doubleArg);
  virtual folly::Future<folly::Unit> future_versioningMethod(int32_t i32Arg, const std::string& strArg, double doubleArg);
  virtual folly::Future<folly::Unit> future_versioningMethod(apache::thrift::RpcOptions& rpcOptions, int32_t i32Arg, const std::string& strArg, double doubleArg);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_versioningMethod(apache::thrift::RpcOptions& rpcOptions, int32_t i32Arg, const std::string& strArg, double doubleArg);
  virtual void versioningMethod(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t i32Arg, const std::string& strArg, double doubleArg);
  static folly::exception_wrapper recv_wrapped_versioningMethod(::apache::thrift::ClientReceiveState& state);
  static void recv_versioningMethod(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_versioningMethod(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_versioningMethod(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void versioningMethodT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32Arg, const std::string& strArg, double doubleArg);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_versioningMethodT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_versioningMethodT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void retI32Method(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void retI32Method(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  virtual void retI32MethodImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual int32_t sync_retI32Method();
  virtual int32_t sync_retI32Method(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<int32_t> future_retI32Method();
  virtual folly::Future<int32_t> future_retI32Method(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_retI32Method(apache::thrift::RpcOptions& rpcOptions);
  virtual void retI32Method(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_retI32Method(int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  static int32_t recv_retI32Method(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual int32_t recv_instance_retI32Method(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_retI32Method(int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void retI32MethodT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_retI32MethodT(Protocol_* prot, int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static int32_t recv_retI32MethodT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void retModAMethod(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void retModAMethod(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  virtual void retModAMethodImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual void sync_retModAMethod( ::some::ns::ModuleA& _return);
  virtual void sync_retModAMethod(apache::thrift::RpcOptions& rpcOptions,  ::some::ns::ModuleA& _return);
  virtual folly::Future< ::some::ns::ModuleA> future_retModAMethod();
  virtual folly::Future< ::some::ns::ModuleA> future_retModAMethod(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair< ::some::ns::ModuleA, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_retModAMethod(apache::thrift::RpcOptions& rpcOptions);
  virtual void retModAMethod(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_retModAMethod( ::some::ns::ModuleA& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_retModAMethod( ::some::ns::ModuleA& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_retModAMethod( ::some::ns::ModuleA& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_retModAMethod( ::some::ns::ModuleA& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void retModAMethodT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_retModAMethodT(Protocol_* prot,  ::some::ns::ModuleA& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_retModAMethodT(Protocol_* prot,  ::some::ns::ModuleA& _return, ::apache::thrift::ClientReceiveState& state);
  virtual void throwMethod(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void throwMethod(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  virtual void throwMethodImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual void sync_throwMethod();
  virtual void sync_throwMethod(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<folly::Unit> future_throwMethod();
  virtual folly::Future<folly::Unit> future_throwMethod(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_throwMethod(apache::thrift::RpcOptions& rpcOptions);
  virtual void throwMethod(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_throwMethod(::apache::thrift::ClientReceiveState& state);
  static void recv_throwMethod(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_throwMethod(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_throwMethod(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void throwMethodT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_throwMethodT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_throwMethodT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void multiThrowMethod(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void multiThrowMethod(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  virtual void multiThrowMethodImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual void sync_multiThrowMethod();
  virtual void sync_multiThrowMethod(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<folly::Unit> future_multiThrowMethod();
  virtual folly::Future<folly::Unit> future_multiThrowMethod(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_multiThrowMethod(apache::thrift::RpcOptions& rpcOptions);
  virtual void multiThrowMethod(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_multiThrowMethod(::apache::thrift::ClientReceiveState& state);
  static void recv_multiThrowMethod(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_multiThrowMethod(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_multiThrowMethod(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void multiThrowMethodT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_multiThrowMethodT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_multiThrowMethodT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void i32ThrowMethod(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32Arg);
  virtual void i32ThrowMethod(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32Arg);
 private:
  virtual void i32ThrowMethodImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32Arg);
 public:
  virtual void sync_i32ThrowMethod(int32_t i32Arg);
  virtual void sync_i32ThrowMethod(apache::thrift::RpcOptions& rpcOptions, int32_t i32Arg);
  virtual folly::Future<folly::Unit> future_i32ThrowMethod(int32_t i32Arg);
  virtual folly::Future<folly::Unit> future_i32ThrowMethod(apache::thrift::RpcOptions& rpcOptions, int32_t i32Arg);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_i32ThrowMethod(apache::thrift::RpcOptions& rpcOptions, int32_t i32Arg);
  virtual void i32ThrowMethod(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t i32Arg);
  static folly::exception_wrapper recv_wrapped_i32ThrowMethod(::apache::thrift::ClientReceiveState& state);
  static void recv_i32ThrowMethod(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_i32ThrowMethod(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_i32ThrowMethod(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void i32ThrowMethodT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32Arg);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_i32ThrowMethodT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_i32ThrowMethodT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void moduleAThrowMethod(std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::some::ns::ModuleA& modArg);
  virtual void moduleAThrowMethod(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::some::ns::ModuleA& modArg);
 private:
  virtual void moduleAThrowMethodImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::some::ns::ModuleA& modArg);
 public:
  virtual void sync_moduleAThrowMethod(const  ::some::ns::ModuleA& modArg);
  virtual void sync_moduleAThrowMethod(apache::thrift::RpcOptions& rpcOptions, const  ::some::ns::ModuleA& modArg);
  virtual folly::Future<folly::Unit> future_moduleAThrowMethod(const  ::some::ns::ModuleA& modArg);
  virtual folly::Future<folly::Unit> future_moduleAThrowMethod(apache::thrift::RpcOptions& rpcOptions, const  ::some::ns::ModuleA& modArg);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_moduleAThrowMethod(apache::thrift::RpcOptions& rpcOptions, const  ::some::ns::ModuleA& modArg);
  virtual void moduleAThrowMethod(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const  ::some::ns::ModuleA& modArg);
  static folly::exception_wrapper recv_wrapped_moduleAThrowMethod(::apache::thrift::ClientReceiveState& state);
  static void recv_moduleAThrowMethod(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_moduleAThrowMethod(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_moduleAThrowMethod(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void moduleAThrowMethodT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::some::ns::ModuleA& modArg);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_moduleAThrowMethodT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_moduleAThrowMethodT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void mixedMethod(std::unique_ptr<apache::thrift::RequestCallback> callback, const std::string& strArg, int32_t i32Arg, const  ::some::ns::ModuleB& modArg);
  virtual void mixedMethod(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::string& strArg, int32_t i32Arg, const  ::some::ns::ModuleB& modArg);
 private:
  virtual void mixedMethodImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::string& strArg, int32_t i32Arg, const  ::some::ns::ModuleB& modArg);
 public:
  virtual void sync_mixedMethod(std::string& _return, const std::string& strArg, int32_t i32Arg, const  ::some::ns::ModuleB& modArg);
  virtual void sync_mixedMethod(apache::thrift::RpcOptions& rpcOptions, std::string& _return, const std::string& strArg, int32_t i32Arg, const  ::some::ns::ModuleB& modArg);
  virtual folly::Future<std::string> future_mixedMethod(const std::string& strArg, int32_t i32Arg, const  ::some::ns::ModuleB& modArg);
  virtual folly::Future<std::string> future_mixedMethod(apache::thrift::RpcOptions& rpcOptions, const std::string& strArg, int32_t i32Arg, const  ::some::ns::ModuleB& modArg);
  virtual folly::Future<std::pair<std::string, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_mixedMethod(apache::thrift::RpcOptions& rpcOptions, const std::string& strArg, int32_t i32Arg, const  ::some::ns::ModuleB& modArg);
  virtual void mixedMethod(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const std::string& strArg, int32_t i32Arg, const  ::some::ns::ModuleB& modArg);
  static folly::exception_wrapper recv_wrapped_mixedMethod(std::string& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_mixedMethod(std::string& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_mixedMethod(std::string& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_mixedMethod(std::string& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void mixedMethodT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::string& strArg, int32_t i32Arg, const  ::some::ns::ModuleB& modArg);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_mixedMethodT(Protocol_* prot, std::string& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_mixedMethodT(Protocol_* prot, std::string& _return, ::apache::thrift::ClientReceiveState& state);
 protected:
  std::unique_ptr<apache::thrift::Cpp2ConnContext> connectionContext_;
  std::shared_ptr<apache::thrift::RequestChannel> channel_;
};

}} // some::ns