class Example 
	def initialize
		@private_data = "nothing"
	end

	private 
	def hidden_method
		"secret"
	end
end

example = Example.new

p example.private_methods(false)
p example.send(:hidden_method)
p example.instance_variable_get :@private_data
p example.instance_variable_set :@private_data, 43
p example.instance_variable_get :@private_data