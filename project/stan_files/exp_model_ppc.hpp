
// Code generated by stanc v2.29.0
#include <stan/model/model_header.hpp>
namespace exp_model_ppc_model_namespace {

using stan::model::model_base_crtp;
using namespace stan::math;


stan::math::profile_map profiles__;
static constexpr std::array<const char*, 23> locations_array__ = 
{" (found before start of program)",
 " (in '/home/car_prices_pr/DA/project/stan_files/exp_model_ppc.stan', line 14, column 2 to column 18)",
 " (in '/home/car_prices_pr/DA/project/stan_files/exp_model_ppc.stan', line 15, column 2 to column 39)",
 " (in '/home/car_prices_pr/DA/project/stan_files/exp_model_ppc.stan', line 16, column 2 to column 41)",
 " (in '/home/car_prices_pr/DA/project/stan_files/exp_model_ppc.stan', line 17, column 2 to column 41)",
 " (in '/home/car_prices_pr/DA/project/stan_files/exp_model_ppc.stan', line 18, column 2 to column 37)",
 " (in '/home/car_prices_pr/DA/project/stan_files/exp_model_ppc.stan', line 19, column 2 to column 40)",
 " (in '/home/car_prices_pr/DA/project/stan_files/exp_model_ppc.stan', line 22, column 4 to column 70)",
 " (in '/home/car_prices_pr/DA/project/stan_files/exp_model_ppc.stan', line 23, column 4 to column 42)",
 " (in '/home/car_prices_pr/DA/project/stan_files/exp_model_ppc.stan', line 21, column 17 to line 25, column 3)",
 " (in '/home/car_prices_pr/DA/project/stan_files/exp_model_ppc.stan', line 21, column 2 to line 25, column 3)",
 " (in '/home/car_prices_pr/DA/project/stan_files/exp_model_ppc.stan', line 2, column 2 to column 17)",
 " (in '/home/car_prices_pr/DA/project/stan_files/exp_model_ppc.stan', line 3, column 9 to column 10)",
 " (in '/home/car_prices_pr/DA/project/stan_files/exp_model_ppc.stan', line 3, column 2 to column 20)",
 " (in '/home/car_prices_pr/DA/project/stan_files/exp_model_ppc.stan', line 4, column 9 to column 10)",
 " (in '/home/car_prices_pr/DA/project/stan_files/exp_model_ppc.stan', line 4, column 2 to column 28)",
 " (in '/home/car_prices_pr/DA/project/stan_files/exp_model_ppc.stan', line 5, column 2 to column 21)",
 " (in '/home/car_prices_pr/DA/project/stan_files/exp_model_ppc.stan', line 6, column 2 to column 22)",
 " (in '/home/car_prices_pr/DA/project/stan_files/exp_model_ppc.stan', line 7, column 2 to column 22)",
 " (in '/home/car_prices_pr/DA/project/stan_files/exp_model_ppc.stan', line 8, column 2 to column 22)",
 " (in '/home/car_prices_pr/DA/project/stan_files/exp_model_ppc.stan', line 9, column 2 to column 23)",
 " (in '/home/car_prices_pr/DA/project/stan_files/exp_model_ppc.stan', line 10, column 2 to column 23)",
 " (in '/home/car_prices_pr/DA/project/stan_files/exp_model_ppc.stan', line 14, column 9 to column 10)"};




class exp_model_ppc_model final : public model_base_crtp<exp_model_ppc_model> {

 private:
  int N;
  Eigen::Matrix<double, -1, 1> mileage__;
  Eigen::Matrix<double, -1, 1> production_year__;
  double mu_a;
  double sig_a;
  double mu_b1;
  double mu_b2;
  double sig_b1;
  double sig_b2; 
  Eigen::Map<Eigen::Matrix<double, -1, 1>> mileage{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double, -1, 1>> production_year{nullptr, 0};
 
 public:
  ~exp_model_ppc_model() { }
  
  inline std::string model_name() const final { return "exp_model_ppc_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.29.0", "stancflags = "};
  }
  
  
  exp_model_ppc_model(stan::io::var_context& context__,
                      unsigned int random_seed__ = 0,
                      std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static constexpr const char* function__ = "exp_model_ppc_model_namespace::exp_model_ppc_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 11;
      context__.validate_dims("data initialization","N","int",
           std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      
      
      current_statement__ = 11;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 11;
      stan::math::check_greater_or_equal(function__, "N", N, 0);
      current_statement__ = 12;
      stan::math::validate_non_negative_index("mileage", "N", N);
      current_statement__ = 13;
      context__.validate_dims("data initialization","mileage","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      mileage__ = 
        Eigen::Matrix<double, -1, 1>::Constant(N,
          std::numeric_limits<double>::quiet_NaN());
      new (&mileage) Eigen::Map<Eigen::Matrix<double, -1, 1>>(mileage__.data(), N);
        
      
      {
        std::vector<local_scalar_t__> mileage_flat__;
        current_statement__ = 13;
        mileage_flat__ = context__.vals_r("mileage");
        current_statement__ = 13;
        pos__ = 1;
        current_statement__ = 13;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 13;
          stan::model::assign(mileage, mileage_flat__[(pos__ - 1)],
            "assigning variable mileage", stan::model::index_uni(sym1__));
          current_statement__ = 13;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 14;
      stan::math::validate_non_negative_index("production_year", "N", N);
      current_statement__ = 15;
      context__.validate_dims("data initialization","production_year",
          "double", std::vector<size_t>{static_cast<size_t>(N)});
      production_year__ = 
        Eigen::Matrix<double, -1, 1>::Constant(N,
          std::numeric_limits<double>::quiet_NaN());
      new (&production_year) Eigen::Map<Eigen::Matrix<double, -1, 1>>(production_year__.data(), N);
        
      
      {
        std::vector<local_scalar_t__> production_year_flat__;
        current_statement__ = 15;
        production_year_flat__ = context__.vals_r("production_year");
        current_statement__ = 15;
        pos__ = 1;
        current_statement__ = 15;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 15;
          stan::model::assign(production_year,
            production_year_flat__[(pos__ - 1)],
            "assigning variable production_year", stan::model::index_uni(sym1__));
          current_statement__ = 15;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 16;
      context__.validate_dims("data initialization","mu_a","double",
           std::vector<size_t>{});
      mu_a = std::numeric_limits<double>::quiet_NaN();
      
      
      current_statement__ = 16;
      mu_a = context__.vals_r("mu_a")[(1 - 1)];
      current_statement__ = 16;
      stan::math::check_greater_or_equal(function__, "mu_a", mu_a, 0);
      current_statement__ = 17;
      context__.validate_dims("data initialization","sig_a","double",
           std::vector<size_t>{});
      sig_a = std::numeric_limits<double>::quiet_NaN();
      
      
      current_statement__ = 17;
      sig_a = context__.vals_r("sig_a")[(1 - 1)];
      current_statement__ = 17;
      stan::math::check_greater_or_equal(function__, "sig_a", sig_a, 0);
      current_statement__ = 18;
      context__.validate_dims("data initialization","mu_b1","double",
           std::vector<size_t>{});
      mu_b1 = std::numeric_limits<double>::quiet_NaN();
      
      
      current_statement__ = 18;
      mu_b1 = context__.vals_r("mu_b1")[(1 - 1)];
      current_statement__ = 18;
      stan::math::check_greater_or_equal(function__, "mu_b1", mu_b1, 0);
      current_statement__ = 19;
      context__.validate_dims("data initialization","mu_b2","double",
           std::vector<size_t>{});
      mu_b2 = std::numeric_limits<double>::quiet_NaN();
      
      
      current_statement__ = 19;
      mu_b2 = context__.vals_r("mu_b2")[(1 - 1)];
      current_statement__ = 19;
      stan::math::check_greater_or_equal(function__, "mu_b2", mu_b2, 0);
      current_statement__ = 20;
      context__.validate_dims("data initialization","sig_b1","double",
           std::vector<size_t>{});
      sig_b1 = std::numeric_limits<double>::quiet_NaN();
      
      
      current_statement__ = 20;
      sig_b1 = context__.vals_r("sig_b1")[(1 - 1)];
      current_statement__ = 20;
      stan::math::check_greater_or_equal(function__, "sig_b1", sig_b1, 0);
      current_statement__ = 21;
      context__.validate_dims("data initialization","sig_b2","double",
           std::vector<size_t>{});
      sig_b2 = std::numeric_limits<double>::quiet_NaN();
      
      
      current_statement__ = 21;
      sig_b2 = context__.vals_r("sig_b2")[(1 - 1)];
      current_statement__ = 21;
      stan::math::check_greater_or_equal(function__, "sig_b2", sig_b2, 0);
      current_statement__ = 22;
      stan::math::validate_non_negative_index("price", "N", N);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 0U;
    
  }
  
  template <bool propto__, bool jacobian__ , typename VecR, typename VecI, 
  stan::require_vector_like_t<VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "exp_model_ppc_model_namespace::log_prob";
    (void) function__;  // suppress unused var warning
    
    try {
      
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, 
  stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, 
  stan::require_std_vector_vt<std::is_floating_point, VecVar>* = nullptr> 
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    (void) propto__;
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    int current_statement__ = 0; 
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    constexpr bool jacobian__ = false;
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "exp_model_ppc_model_namespace::write_array";
    (void) function__;  // suppress unused var warning
    
    try {
      if (stan::math::logical_negation((stan::math::primitive_value(
            emit_transformed_parameters__) || stan::math::primitive_value(
            emit_generated_quantities__)))) {
        return ;
      } 
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      Eigen::Matrix<double, -1, 1> price =
         Eigen::Matrix<double, -1, 1>::Constant(N,
           std::numeric_limits<double>::quiet_NaN());
      double alpha = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 2;
      alpha = stan::math::normal_rng(mu_a, sig_a, base_rng__);
      double beta1 = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 3;
      beta1 = stan::math::normal_rng(mu_b1, sig_b1, base_rng__);
      double beta2 = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 4;
      beta2 = stan::math::normal_rng(mu_b2, sig_b2, base_rng__);
      double sigma = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 5;
      sigma = stan::math::normal_rng(0.15, 0.02, base_rng__);
      double lambda = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 6;
      lambda = (1 / stan::math::normal_rng(40, 0.2, base_rng__));
      current_statement__ = 10;
      for (int i = 1; i <= N; ++i) {
        double mu = std::numeric_limits<double>::quiet_NaN();
        current_statement__ = 7;
        mu = ((alpha -
                (beta1 *
                  stan::model::rvalue(mileage, "mileage",
                    stan::model::index_uni(i)))) +
               (beta2 *
                 stan::model::rvalue(production_year, "production_year",
                   stan::model::index_uni(i))));
        current_statement__ = 8;
        stan::model::assign(price,
          stan::math::exponential_rng((mu / lambda), base_rng__),
          "assigning variable price", stan::model::index_uni(i));
      }
      out__.write(price);
      out__.write(alpha);
      out__.write(beta1);
      out__.write(beta2);
      out__.write(sigma);
      out__.write(lambda);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, 
  stan::require_std_vector_t<VecVar>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline void transform_inits_impl(VecVar& params_r__, VecI& params_i__,
                                   VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__ = std::vector<std::string>{"price", "alpha", "beta1", "beta2",
      "sigma", "lambda"};
    
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{
                                                                   static_cast<size_t>(N)
                                                                   },
      std::vector<size_t>{}, std::vector<size_t>{}, std::vector<size_t>{
      }, std::vector<size_t>{}, std::vector<size_t>{}};
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "price" + '.' + std::to_string(sym1__));
        } 
      }
      param_names__.emplace_back(std::string() + "alpha");
      param_names__.emplace_back(std::string() + "beta1");
      param_names__.emplace_back(std::string() + "beta2");
      param_names__.emplace_back(std::string() + "sigma");
      param_names__.emplace_back(std::string() + "lambda");
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "price" + '.' + std::to_string(sym1__));
        } 
      }
      param_names__.emplace_back(std::string() + "alpha");
      param_names__.emplace_back(std::string() + "beta1");
      param_names__.emplace_back(std::string() + "beta2");
      param_names__.emplace_back(std::string() + "sigma");
      param_names__.emplace_back(std::string() + "lambda");
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"price\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"},{\"name\":\"alpha\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"beta1\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"beta2\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"lambda\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"}]");
    
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"price\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"},{\"name\":\"alpha\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"beta1\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"beta2\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"lambda\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"}]");
    
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 0;
      const size_t num_transformed = 0;
      const size_t num_gen_quantities = 
  (((((N + 1) + 1) + 1) + 1) + 1);
      std::vector<double> vars_vec(num_params__
       + (emit_transformed_parameters * num_transformed)
       + (emit_generated_quantities * num_gen_quantities));
      std::vector<int> params_i;
      write_array_impl(base_rng, params_r, params_i, vars_vec,
          emit_transformed_parameters, emit_generated_quantities, pstream);
      vars = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        vars_vec.data(), vars_vec.size());
    }

    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 0;
      const size_t num_transformed = 0;
      const size_t num_gen_quantities = 
  (((((N + 1) + 1) + 1) + 1) + 1);
      vars.resize(num_params__
        + (emit_transformed_parameters * num_transformed)
        + (emit_generated_quantities * num_gen_quantities));
      write_array_impl(base_rng, params_r, params_i, vars, emit_transformed_parameters, emit_generated_quantities, pstream);
    }

    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }

    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }


    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits(context, params_i, params_r_vec, pstream);
      params_r = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        params_r_vec.data(), params_r_vec.size());
    }

  inline void transform_inits(const stan::io::var_context& context,
                              std::vector<int>& params_i,
                              std::vector<double>& vars,
                              std::ostream* pstream__ = nullptr) const {
     constexpr std::array<const char*, 0> names__{};
      const std::array<Eigen::Index, 0> constrain_param_sizes__{};
      const auto num_constrained_params__ = std::accumulate(
        constrain_param_sizes__.begin(), constrain_param_sizes__.end(), 0);
    
     std::vector<double> params_r_flat__(num_constrained_params__);
     Eigen::Index size_iter__ = 0;
     Eigen::Index flat_iter__ = 0;
     for (auto&& param_name__ : names__) {
       const auto param_vec__ = context.vals_r(param_name__);
       for (Eigen::Index i = 0; i < constrain_param_sizes__[size_iter__]; ++i) {
         params_r_flat__[flat_iter__] = param_vec__[i];
         ++flat_iter__;
       }
       ++size_iter__;
     }
     vars.resize(num_params_r__);
     transform_inits_impl(params_r_flat__, params_i, vars, pstream__);
    } // transform_inits() 
    
};
}
using stan_model = exp_model_ppc_model_namespace::exp_model_ppc_model;

#ifndef USING_R

// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}

stan::math::profile_map& get_stan_profile_data() {
  return exp_model_ppc_model_namespace::profiles__;
}

#endif


