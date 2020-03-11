#ifndef GRPC_EXAMPLE_GREETINGCLIENT_H
#define GRPC_EXAMPLE_GREETINGCLIENT_H

#include <greeting.grpc.pb.h>
#include <grpc/grpc.h>
#include <grpcpp/channel.h>

#include <memory>

class GreetingClient {
  public:
    GreetingClient(const GreetingClient &) = delete;

    GreetingClient(GreetingClient &&) = delete;

    GreetingClient &operator=(const GreetingClient &) = delete;

    GreetingClient &operator=(GreetingClient &&) = delete;

    // only for C++11, return static local var reference is thread safe
    static GreetingClient &getInstance() {
        static GreetingClient kSingleInstance;
        return kSingleInstance;
    }

    bool init(const std::string &server);

    void run();

    void stop();

  private:
    GreetingClient() = default;

    virtual ~GreetingClient() = default;

  public:
    std::atomic_bool running_{false};

    std::unique_ptr<::grpc::example::GreetingService::Stub> stub_;
    ::grpc::ClientContext context_{};
    std::unique_ptr<
        ::grpc::ClientReaderWriter<::grpc::example::RequestSubscribe, ::grpc::example::ReplyGreeting>>
        stream_{};
};

#endif  // GRPC_EXAMPLE_GREETINGCLIENT_H
