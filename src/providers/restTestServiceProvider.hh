<?hh //strict

    namespace resttest\Providers;


    use Plenty\Plugin\ServiceProvider;

    class RestTestServiceProvider extends ServiceProvider
    {

        /**
         * Register the service provider.
         */

        public function register():void
        {

        }
    }

    public function register():void
    {
        $this->getApplication()->register(RestTestRouteServiceProvider::class);
    }
?>
