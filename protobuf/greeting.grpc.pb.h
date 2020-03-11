// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: greeting.proto
#ifndef GRPC_greeting_2eproto__INCLUDED
#define GRPC_greeting_2eproto__INCLUDED

#include "greeting.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
namespace example {

class GreetingService final {
 public:
  static constexpr char const* service_full_name() {
    return "grpc.example.GreetingService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::grpc::example::RequestSubscribe, ::grpc::example::ReplyGreeting>> SubscribeGreetingBySecond(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::grpc::example::RequestSubscribe, ::grpc::example::ReplyGreeting>>(SubscribeGreetingBySecondRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::grpc::example::RequestSubscribe, ::grpc::example::ReplyGreeting>> AsyncSubscribeGreetingBySecond(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::grpc::example::RequestSubscribe, ::grpc::example::ReplyGreeting>>(AsyncSubscribeGreetingBySecondRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::grpc::example::RequestSubscribe, ::grpc::example::ReplyGreeting>> PrepareAsyncSubscribeGreetingBySecond(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::grpc::example::RequestSubscribe, ::grpc::example::ReplyGreeting>>(PrepareAsyncSubscribeGreetingBySecondRaw(context, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void SubscribeGreetingBySecond(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::grpc::example::RequestSubscribe,::grpc::example::ReplyGreeting>* reactor) = 0;
      #else
      virtual void SubscribeGreetingBySecond(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::grpc::example::RequestSubscribe,::grpc::example::ReplyGreeting>* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientReaderWriterInterface< ::grpc::example::RequestSubscribe, ::grpc::example::ReplyGreeting>* SubscribeGreetingBySecondRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::grpc::example::RequestSubscribe, ::grpc::example::ReplyGreeting>* AsyncSubscribeGreetingBySecondRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::grpc::example::RequestSubscribe, ::grpc::example::ReplyGreeting>* PrepareAsyncSubscribeGreetingBySecondRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    std::unique_ptr< ::grpc::ClientReaderWriter< ::grpc::example::RequestSubscribe, ::grpc::example::ReplyGreeting>> SubscribeGreetingBySecond(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::grpc::example::RequestSubscribe, ::grpc::example::ReplyGreeting>>(SubscribeGreetingBySecondRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::grpc::example::RequestSubscribe, ::grpc::example::ReplyGreeting>> AsyncSubscribeGreetingBySecond(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::grpc::example::RequestSubscribe, ::grpc::example::ReplyGreeting>>(AsyncSubscribeGreetingBySecondRaw(context, cq, tag));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::grpc::example::RequestSubscribe, ::grpc::example::ReplyGreeting>> PrepareAsyncSubscribeGreetingBySecond(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::grpc::example::RequestSubscribe, ::grpc::example::ReplyGreeting>>(PrepareAsyncSubscribeGreetingBySecondRaw(context, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void SubscribeGreetingBySecond(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::grpc::example::RequestSubscribe,::grpc::example::ReplyGreeting>* reactor) override;
      #else
      void SubscribeGreetingBySecond(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::grpc::example::RequestSubscribe,::grpc::example::ReplyGreeting>* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientReaderWriter< ::grpc::example::RequestSubscribe, ::grpc::example::ReplyGreeting>* SubscribeGreetingBySecondRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::grpc::example::RequestSubscribe, ::grpc::example::ReplyGreeting>* AsyncSubscribeGreetingBySecondRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReaderWriter< ::grpc::example::RequestSubscribe, ::grpc::example::ReplyGreeting>* PrepareAsyncSubscribeGreetingBySecondRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SubscribeGreetingBySecond_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status SubscribeGreetingBySecond(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::grpc::example::ReplyGreeting, ::grpc::example::RequestSubscribe>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_SubscribeGreetingBySecond : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_SubscribeGreetingBySecond() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SubscribeGreetingBySecond() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeGreetingBySecond(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::grpc::example::ReplyGreeting, ::grpc::example::RequestSubscribe>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSubscribeGreetingBySecond(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::grpc::example::ReplyGreeting, ::grpc::example::RequestSubscribe>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SubscribeGreetingBySecond<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_SubscribeGreetingBySecond : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_SubscribeGreetingBySecond() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc_impl::internal::CallbackBidiHandler< ::grpc::example::RequestSubscribe, ::grpc::example::ReplyGreeting>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context) { return this->SubscribeGreetingBySecond(context); }));
    }
    ~ExperimentalWithCallbackMethod_SubscribeGreetingBySecond() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeGreetingBySecond(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::grpc::example::ReplyGreeting, ::grpc::example::RequestSubscribe>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerBidiReactor< ::grpc::example::RequestSubscribe, ::grpc::example::ReplyGreeting>* SubscribeGreetingBySecond(
      ::grpc::CallbackServerContext* /*context*/)
    #else
    virtual ::grpc::experimental::ServerBidiReactor< ::grpc::example::RequestSubscribe, ::grpc::example::ReplyGreeting>* SubscribeGreetingBySecond(
      ::grpc::experimental::CallbackServerContext* /*context*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_SubscribeGreetingBySecond<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_SubscribeGreetingBySecond<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_SubscribeGreetingBySecond : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_SubscribeGreetingBySecond() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SubscribeGreetingBySecond() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeGreetingBySecond(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::grpc::example::ReplyGreeting, ::grpc::example::RequestSubscribe>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SubscribeGreetingBySecond : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_SubscribeGreetingBySecond() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SubscribeGreetingBySecond() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeGreetingBySecond(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::grpc::example::ReplyGreeting, ::grpc::example::RequestSubscribe>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSubscribeGreetingBySecond(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_SubscribeGreetingBySecond : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_SubscribeGreetingBySecond() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc_impl::internal::CallbackBidiHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context) { return this->SubscribeGreetingBySecond(context); }));
    }
    ~ExperimentalWithRawCallbackMethod_SubscribeGreetingBySecond() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SubscribeGreetingBySecond(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::grpc::example::ReplyGreeting, ::grpc::example::RequestSubscribe>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerBidiReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* SubscribeGreetingBySecond(
      ::grpc::CallbackServerContext* /*context*/)
    #else
    virtual ::grpc::experimental::ServerBidiReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* SubscribeGreetingBySecond(
      ::grpc::experimental::CallbackServerContext* /*context*/)
    #endif
      { return nullptr; }
  };
  typedef Service StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef Service StreamedService;
};

}  // namespace example
}  // namespace grpc


#endif  // GRPC_greeting_2eproto__INCLUDED
