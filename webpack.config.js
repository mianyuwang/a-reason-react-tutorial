module.exports = {
  mode: 'development',
  entry: './lib/js/src/Main.js',
  devServer: {
    contentBase: './public',
    compress: true,
    port: 9000
  },
  output: {
    path: __dirname + '/public',
    filename: 'bundle.js'
  }
};
