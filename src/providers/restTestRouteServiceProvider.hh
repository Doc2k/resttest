<?hh //strict

    namespace HelloWorld\Providers;


    use Plenty\Plugin\RouteServiceProvider;
    use Plenty\Plugin\Routing\Router;

    class RestTestRouteServiceProvider extends RouteServiceProvider
    {
        public function map(Router $router):void
        {

        }
    }

    public function map(Router $router):void
      {
          $router->get('resttest','resttest\Controllers\ContentController@sayHello');
      }
?>
